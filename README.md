# call_cost_calculator
This is a program that calculates the net cost of a call (net_cost), the tax on a call (call_tax) and the total cost of the call (total_cost). The program should accept a cell phone number (cell_num), the number of
relay stations(relays), and the length in minutes of the cal (call_length) from a user. Please consider the following
1) The tax rate (in percent) on a call (call_rate) is simply based on the number of relay stations (relays) used to make the call (0<= relays <=5 then tax_rate = 1% ; 6<= relays <=11 then tax_rate = 3%; 12<= relays <=20 then tax_rate = 5%; 21<= relays <=50 then tax_rate = 8%; relays >50 then tax_rate =12%) .
2) The net cost of a call is calculated by the following formula: net_cost = ( relays / 50.0 * 0.40 * call_length).
3) The tax on a call is calculated by the following
formula: call_tax = net_cost * tax_rate / 100 (drop /100 if you converted the
rate from a percentage)
4). The total cost of a call (rounded to the nearest hundredth) is calculated by the following formula: total_cost = net_cost + call_tax . All tax and
cost calculations should be rounded to the nearest hundredths. Use the following format information to print the variables:
