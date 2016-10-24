SECTIONS
{
  .my_section :
  {
    *(.my_section)
  }
}

addr_of_my_section = ADDR(.my_section);
size_of_my_section = SIZEOF(.my_section);
