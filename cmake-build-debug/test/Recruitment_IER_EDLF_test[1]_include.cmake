if(EXISTS "C:/Users/isake/Desktop/Ingenieria/POO/POO Trabajos/Recruitment-IER-EDLF/cmake-build-debug/test/Recruitment_IER_EDLF_test[1]_tests.cmake")
  include("C:/Users/isake/Desktop/Ingenieria/POO/POO Trabajos/Recruitment-IER-EDLF/cmake-build-debug/test/Recruitment_IER_EDLF_test[1]_tests.cmake")
else()
  add_test(Recruitment_IER_EDLF_test_NOT_BUILT Recruitment_IER_EDLF_test_NOT_BUILT)
endif()
