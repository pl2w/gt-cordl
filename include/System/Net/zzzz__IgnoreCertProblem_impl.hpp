#pragma once
// IWYU pragma private; include "System/Net/IgnoreCertProblem.hpp"
#include "System/Net/zzzz__IgnoreCertProblem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::IgnoreCertProblem::IgnoreCertProblem(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::IgnoreCertProblem::IgnoreCertProblem()   {
}
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::not_time_valid{static_cast<int32_t>(0x1)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::ctl_not_time_valid{static_cast<int32_t>(0x2)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::not_time_nested{static_cast<int32_t>(0x4)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::invalid_basic_constraints{static_cast<int32_t>(0x8)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::all_not_time_valid{static_cast<int32_t>(0x7)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::allow_unknown_ca{static_cast<int32_t>(0x10)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::wrong_usage{static_cast<int32_t>(0x20)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::invalid_name{static_cast<int32_t>(0x40)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::invalid_policy{static_cast<int32_t>(0x80)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::end_rev_unknown{static_cast<int32_t>(0x100)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::ctl_signer_rev_unknown{static_cast<int32_t>(0x200)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::ca_rev_unknown{static_cast<int32_t>(0x400)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::root_rev_unknown{static_cast<int32_t>(0x800)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::all_rev_unknown{static_cast<int32_t>(0xf00)};
constexpr ::System::Net::IgnoreCertProblem  System::Net::IgnoreCertProblem::none{static_cast<int32_t>(0xfff)};
