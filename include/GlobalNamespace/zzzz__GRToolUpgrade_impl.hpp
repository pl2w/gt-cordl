#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgrade.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgrade_ToolUpgradeLevel_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgrade_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgrade_ToolUpgradeLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRToolUpgrade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRToolUpgrade::*)()>(&::GlobalNamespace::GRToolUpgrade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c8444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgrade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeName;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeName;
}
constexpr void GlobalNamespace::GRToolUpgrade::__cordl_internal_set_upgradeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeName = value;
}
constexpr ::StringW& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___description;
}
constexpr void GlobalNamespace::GRToolUpgrade::__cordl_internal_set_description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___description = value;
}
constexpr ::StringW& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeId;
}
constexpr ::StringW const& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeId;
}
constexpr void GlobalNamespace::GRToolUpgrade::__cordl_internal_set_upgradeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeId = value;
}
constexpr ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeLevels;
}
constexpr ::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel> const& GlobalNamespace::GRToolUpgrade::__cordl_internal_get_upgradeLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeLevels;
}
constexpr void GlobalNamespace::GRToolUpgrade::__cordl_internal_set_upgradeLevels(::ArrayW<::GlobalNamespace::GRToolUpgrade_ToolUpgradeLevel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeLevels = value;
}
inline void GlobalNamespace::GRToolUpgrade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRToolUpgrade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRToolUpgrade* GlobalNamespace::GRToolUpgrade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRToolUpgrade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgrade::GRToolUpgrade()   {
}
