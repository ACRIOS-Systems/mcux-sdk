#Description: SMARTCARD PHY USIM; user_visible: True
include_guard(GLOBAL)
message("driver_smartcard_phy_usim component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_smartcard_phy_usim.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_smartcard_usim)
