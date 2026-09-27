#pragma once
// IWYU pragma private; include "Liv/Lck/QualityOptionOverride.hpp"
#include "Liv/Lck/zzzz__DeviceModel_impl.hpp"
#include "Liv/Lck/zzzz__QualityOptionOverride_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "DeviceModel", ty: "::Liv::Lck::DeviceModel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "QualityOptions", ty: "::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::QualityOptionOverride::QualityOptionOverride(::Liv::Lck::DeviceModel  DeviceModel, ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  QualityOptions) noexcept  {
this->DeviceModel = DeviceModel;
this->QualityOptions = QualityOptions;
}
// Ctor Parameters []
constexpr ::Liv::Lck::QualityOptionOverride::QualityOptionOverride()   {
}
