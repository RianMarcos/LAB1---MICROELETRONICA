
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY reg_mux_tb IS
END reg_mux_tb;
 
ARCHITECTURE behavior OF reg_mux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT reg_mux
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         c : IN  std_logic;
         d : IN  std_logic;
         sel : IN  std_logic_vector(1 downto 0);
         clk : IN  std_logic;
         x : OUT  std_logic;
         y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs

   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal c : std_logic := '0';
   signal d : std_logic := '0';
   signal sel : std_logic_vector(1 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal x : std_logic;
   signal y : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: reg_mux PORT MAP (
          a => a,
          b => b,
          c => c,
          d => d,
          sel => sel,
          clk => clk,
          x => x,
          y => y
        );



   -- Stimulus process
  clk <= not clk after clk_period/2;
  a <= not a after 320 ns; 		
  b <= not b after 160 ns;
  c <= not c after 80 ns;
  d <= not d after 40 ns;
  sel <= "01" after 200 ns,
			"10" after 400 ns,
			"11" after 600 ns,
			"00" after 800 ns;

END;
