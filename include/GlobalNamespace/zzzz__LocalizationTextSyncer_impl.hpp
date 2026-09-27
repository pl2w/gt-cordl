#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTextSyncer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationTextSyncer_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationFontPair_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationTextSyncer_TextCompSyncData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a684bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a687e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a68918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::OnDestroy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a689b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.OnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::OnLanguageChanged)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5a684c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer.TryGetFontDataOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizationTextSyncer::*)(::by_ref<::GlobalNamespace::LocalisationFontPair>)>(&::GlobalNamespace::LocalizationTextSyncer::TryGetFontDataOverride)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a68a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"TryGetFontDataOverride", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationTextSyncer::*)()>(&::GlobalNamespace::LocalizationTextSyncer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a68ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*& GlobalNamespace::LocalizationTextSyncer::__cordl_internal_get__textComponentsToSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textComponentsToSync;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>* const& GlobalNamespace::LocalizationTextSyncer::__cordl_internal_get__textComponentsToSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textComponentsToSync;
}
constexpr void GlobalNamespace::LocalizationTextSyncer::__cordl_internal_set__textComponentsToSync(::System::Collections::Generic::List_1<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textComponentsToSync = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& GlobalNamespace::LocalizationTextSyncer::__cordl_internal_get__universalFontOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____universalFontOverrides;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& GlobalNamespace::LocalizationTextSyncer::__cordl_internal_get__universalFontOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____universalFontOverrides;
}
constexpr void GlobalNamespace::LocalizationTextSyncer::__cordl_internal_set__universalFontOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____universalFontOverrides = value;
}
inline void GlobalNamespace::LocalizationTextSyncer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizationTextSyncer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizationTextSyncer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizationTextSyncer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalizationTextSyncer::OnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalizationTextSyncer::TryGetFontDataOverride(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontDataOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {"TryGetFontDataOverride", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fontDataOverride);
}
inline void GlobalNamespace::LocalizationTextSyncer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizationTextSyncer* GlobalNamespace::LocalizationTextSyncer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizationTextSyncer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationTextSyncer::LocalizationTextSyncer()   {
}
