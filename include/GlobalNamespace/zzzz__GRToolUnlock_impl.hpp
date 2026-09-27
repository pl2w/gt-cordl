#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUnlock.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgrade_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUnlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUnlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUnlock::*)()>(&::GlobalNamespace::GRToolUnlock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUnlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolName;
}
constexpr ::StringW const& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolName;
}
constexpr void GlobalNamespace::GRToolUnlock::__cordl_internal_set_toolName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolName = value;
}
constexpr ::StringW& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolId;
}
constexpr ::StringW const& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolId;
}
constexpr void GlobalNamespace::GRToolUnlock::__cordl_internal_set_toolId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolId = value;
}
constexpr int32_t& GlobalNamespace::GRToolUnlock::__cordl_internal_get_unlockLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockLevel;
}
constexpr int32_t const& GlobalNamespace::GRToolUnlock::__cordl_internal_get_unlockLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockLevel;
}
constexpr void GlobalNamespace::GRToolUnlock::__cordl_internal_set_unlockLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockLevel = value;
}
constexpr int32_t& GlobalNamespace::GRToolUnlock::__cordl_internal_get_unlockCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockCost;
}
constexpr int32_t const& GlobalNamespace::GRToolUnlock::__cordl_internal_get_unlockCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unlockCost;
}
constexpr void GlobalNamespace::GRToolUnlock::__cordl_internal_set_unlockCost(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unlockCost = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolUpgrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgrades;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>> const& GlobalNamespace::GRToolUnlock::__cordl_internal_get_toolUpgrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgrades;
}
constexpr void GlobalNamespace::GRToolUnlock::__cordl_internal_set_toolUpgrades(::ArrayW<::UnityW<::GlobalNamespace::GRToolUpgrade>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolUpgrades = value;
}
inline void GlobalNamespace::GRToolUnlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUnlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUnlock* GlobalNamespace::GRToolUnlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUnlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUnlock::GRToolUnlock()   {
}
