#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AISpawnPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AISpawnPoint_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::AISpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::AISpawnPoint::*)()>(&::GT_CustomMapSupportRuntime::AISpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cb1804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_get_spawnID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnID;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_get_spawnID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnID;
}
constexpr void GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_set_spawnID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnID = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_get_spawnCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_get_spawnCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCount;
}
constexpr void GT_CustomMapSupportRuntime::AISpawnPoint::__cordl_internal_set_spawnCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCount = value;
}
inline void GT_CustomMapSupportRuntime::AISpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::AISpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::AISpawnPoint* GT_CustomMapSupportRuntime::AISpawnPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::AISpawnPoint*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AISpawnPoint::AISpawnPoint()   {
}
