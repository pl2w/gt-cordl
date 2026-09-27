#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceColors.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceColors_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceColor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderResourceColors.GetColorForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BuilderResourceColors::*)(::GlobalNamespace::BuilderResourceType)>(&::GlobalNamespace::BuilderResourceColors::GetColorForType)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57b3f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResourceColors*>(),
                        {"GetColorForType", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderResourceColors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderResourceColors::*)()>(&::GlobalNamespace::BuilderResourceColors::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b4108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResourceColors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*& GlobalNamespace::BuilderResourceColors::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>* const& GlobalNamespace::BuilderResourceColors::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void GlobalNamespace::BuilderResourceColors::__cordl_internal_set_colors(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderResourceColor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
inline ::UnityEngine::Color GlobalNamespace::BuilderResourceColors::GetColorForType(::GlobalNamespace::BuilderResourceType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResourceColors*>(),
                        {"GetColorForType", {}, {::i2c::type_of<::GlobalNamespace::BuilderResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, type);
}
inline void GlobalNamespace::BuilderResourceColors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderResourceColors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderResourceColors* GlobalNamespace::BuilderResourceColors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderResourceColors*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderResourceColors::BuilderResourceColors()   {
}
