
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity reg_mux is
    Port ( a : in  STD_LOGIC_VECTOR (3 downto 0);
           b : in  STD_LOGIC_VECTOR (3 downto 0);
           c : in  STD_LOGIC_VECTOR (3 downto 0);
           d : in  STD_LOGIC_VECTOR (3 downto 0);
           sel : in  STD_LOGIC_VECTOR (1 downto 0);
           clk : in  STD_LOGIC;
           x : out  STD_LOGIC_VECTOR (3 downto 0);
           y : out  STD_LOGIC_VECTOR (3 downto 0));
end reg_mux;

architecture Behavioral of reg_mux is
	signal mux: std_logic_vector (3 downto 0);
begin

--multiplexador
mux <= a when sel="00" else
	b when sel="01" else	
	c when sel="10" else
	d;
	
x <= mux;
--process para o codigo rodar de forma sequencial
--o clock faz com que y mude o valor
--flipflop:
process(clk)
begin
	if(clk'event and clk='1') then
		y <= mux;
	end if;
end process;

end Behavioral;


