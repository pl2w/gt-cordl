#pragma once
// IWYU pragma private; include "GorillaTagScripts/CrystalVisualsPreset.hpp"
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_VisualState_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_def.hpp"
#include "GorillaTagScripts/zzzz__CrystalVisualsPreset_VisualState_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CrystalVisualsPreset.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::CrystalVisualsPreset::*)()>(&::GorillaTagScripts::CrystalVisualsPreset::GetHashCode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bb6418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(),
                    {::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CrystalVisualsPreset.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CrystalVisualsPreset::*)()>(&::GorillaTagScripts::CrystalVisualsPreset::Save)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bb64d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CrystalVisualsPreset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CrystalVisualsPreset::*)()>(&::GorillaTagScripts::CrystalVisualsPreset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bb64dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState& GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_get_stateA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateA;
}
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState const& GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_get_stateA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateA;
}
constexpr void GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_set_stateA(::GlobalNamespace::CrystalVisualsPreset_VisualState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateA = value;
}
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState& GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_get_stateB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateB;
}
constexpr ::GlobalNamespace::CrystalVisualsPreset_VisualState const& GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_get_stateB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateB;
}
constexpr void GorillaTagScripts::CrystalVisualsPreset::__cordl_internal_set_stateB(::GlobalNamespace::CrystalVisualsPreset_VisualState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateB = value;
}
inline int32_t GorillaTagScripts::CrystalVisualsPreset::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::CrystalVisualsPreset::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::CrystalVisualsPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CrystalVisualsPreset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CrystalVisualsPreset* GorillaTagScripts::CrystalVisualsPreset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CrystalVisualsPreset*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CrystalVisualsPreset::CrystalVisualsPreset()   {
}
