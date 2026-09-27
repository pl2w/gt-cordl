#pragma once
// IWYU pragma private; include "GlobalNamespace/GRNameDisplayPlate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRNameDisplayPlate_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRNameDisplayPlate.RefreshPlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNameDisplayPlate::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GRNameDisplayPlate::RefreshPlayerName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x589ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {"RefreshPlayerName", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNameDisplayPlate.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNameDisplayPlate::*)()>(&::GlobalNamespace::GRNameDisplayPlate::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x589f0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRNameDisplayPlate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRNameDisplayPlate::*)()>(&::GlobalNamespace::GRNameDisplayPlate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRNameDisplayPlate::__cordl_internal_get_namePlateLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namePlateLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRNameDisplayPlate::__cordl_internal_get_namePlateLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___namePlateLabel;
}
constexpr void GlobalNamespace::GRNameDisplayPlate::__cordl_internal_set_namePlateLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___namePlateLabel = value;
}
inline void GlobalNamespace::GRNameDisplayPlate::RefreshPlayerName(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {"RefreshPlayerName", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig);
}
inline void GlobalNamespace::GRNameDisplayPlate::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRNameDisplayPlate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRNameDisplayPlate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRNameDisplayPlate* GlobalNamespace::GRNameDisplayPlate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRNameDisplayPlate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRNameDisplayPlate::GRNameDisplayPlate()   {
}
