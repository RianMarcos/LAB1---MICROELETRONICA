
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity reg_mux is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           c : in  STD_LOGIC;
           d : in  STD_LOGIC;
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           x : out  STD_LOGIC;
           y : out  STD_LOGIC );
end reg_mux;

architecture Behavioral of reg_mux is
	signal mux: std_logic;
begin
mux <= a when sel="00" else
	b when sel="01" else	
	c when sel="10" else
	d;
x <= mux;
process(clk)
begin
	if(clk'event and clk='1') then
		y <= mux;
	end if;
end process;

end Behavioral;