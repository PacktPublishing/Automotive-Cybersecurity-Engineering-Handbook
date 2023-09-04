void process_register(uint8_t* register_ptr, uint8_t data) {
  // Initialize the register
  uint8_t register_value = 0x00;

  // Write to the register
  write_register(register_ptr, data);

  // Read back the register
  read_register(register_ptr, &register_value);

  if (register_value == data) {
    // Proceed
  } else {
    Log_fault(register_ptr, register_value, data);
  }
}

void write_register(uint8_t* register_ptr, uint8_t data) {
  // Place your code here to write data to the register
}

void read_register(uint8_t* register_ptr, uint8_t* out_value) {
  // Place your code here to read data from the register and populate out_value
}


void Log_fault(uint8_t* register_ptr, uint8_t register_value, uint8_t expected_value) {
  // Place your code here for logging the fault
}