#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser_HIDItemStateLocal.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_HIDItemStateLocal_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateLocal.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>)>(&::GlobalNamespace::HIDParser_HIDItemStateLocal::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xafe4674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateLocal.SetUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HIDParser_HIDItemStateLocal::*)(int32_t)>(&::GlobalNamespace::HIDParser_HIDItemStateLocal::SetUsage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xafe4358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"SetUsage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HIDParser_HIDItemStateLocal.GetUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HIDParser_HIDItemStateLocal::*)(int32_t)>(&::GlobalNamespace::HIDParser_HIDItemStateLocal::GetUsage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xafe4564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"GetUsage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HIDParser_HIDItemStateLocal::Reset(::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::HIDParser_HIDItemStateLocal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void GlobalNamespace::HIDParser_HIDItemStateLocal::SetUsage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"SetUsage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::HIDParser_HIDItemStateLocal::GetUsage(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HIDParser_HIDItemStateLocal>(),
                        {"GetUsage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "designatorIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HIDParser_HIDItemStateLocal::HIDParser_HIDItemStateLocal(::System::Nullable_1<int32_t>  usage, ::System::Nullable_1<int32_t>  usageMinimum, ::System::Nullable_1<int32_t>  usageMaximum, ::System::Nullable_1<int32_t>  designatorIndex, ::System::Nullable_1<int32_t>  designatorMinimum, ::System::Nullable_1<int32_t>  designatorMaximum, ::System::Nullable_1<int32_t>  stringIndex, ::System::Nullable_1<int32_t>  stringMinimum, ::System::Nullable_1<int32_t>  stringMaximum, ::System::Collections::Generic::List_1<int32_t>*  usageList) noexcept  {
this->usage = usage;
this->usageMinimum = usageMinimum;
this->usageMaximum = usageMaximum;
this->designatorIndex = designatorIndex;
this->designatorMinimum = designatorMinimum;
this->designatorMaximum = designatorMaximum;
this->stringIndex = stringIndex;
this->stringMinimum = stringMinimum;
this->stringMaximum = stringMaximum;
this->usageList = usageList;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HIDParser_HIDItemStateLocal::HIDParser_HIDItemStateLocal()   {
}
