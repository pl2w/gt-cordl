#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_BatchPrefabBaker.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_BatchPrefabBaker_def.hpp"
#include "GlobalNamespace/zzzz__MB3_BatchPrefabBaker_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_BatchPrefabBaker.CreateSourceAndResultPrefabInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_BatchPrefabBaker::*)()>(&::GlobalNamespace::MB3_BatchPrefabBaker::CreateSourceAndResultPrefabInstances)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d75460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker*>(),
                        {"CreateSourceAndResultPrefabInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_BatchPrefabBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_BatchPrefabBaker::*)()>(&::GlobalNamespace::MB3_BatchPrefabBaker::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d754c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_prefabRows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRows;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*> const& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_prefabRows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabRows;
}
constexpr void GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_set_prefabRows(::ArrayW<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabRows = value;
}
constexpr ::StringW& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_outputPrefabFolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPrefabFolder;
}
constexpr ::StringW const& GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_get_outputPrefabFolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPrefabFolder;
}
constexpr void GlobalNamespace::MB3_BatchPrefabBaker::__cordl_internal_set_outputPrefabFolder(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPrefabFolder = value;
}
inline void GlobalNamespace::MB3_BatchPrefabBaker::CreateSourceAndResultPrefabInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker*>(),
                        {"CreateSourceAndResultPrefabInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_BatchPrefabBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_BatchPrefabBaker* GlobalNamespace::MB3_BatchPrefabBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_BatchPrefabBaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_BatchPrefabBaker::MB3_BatchPrefabBaker()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::*)()>(&::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d75560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_get_sourcePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourcePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_get_sourcePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourcePrefab;
}
constexpr void GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_set_sourcePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourcePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_get_resultPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_get_resultPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefab;
}
constexpr void GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::__cordl_internal_set_resultPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultPrefab = value;
}
inline void GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow* GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_BatchPrefabBaker_MB3_PrefabBakerRow::MB3_BatchPrefabBaker_MB3_PrefabBakerRow()   {
}
