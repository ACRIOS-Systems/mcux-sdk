#Description: Component flexspi_nor_flash_adapter_rt1060; user_visible: True
include_guard(GLOBAL)
message("component_flexspi_nor_flash_adapter_rt1060 component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_adapter_flexspi_nor_flash.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_flexspi)