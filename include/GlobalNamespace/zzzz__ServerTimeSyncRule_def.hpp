#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeSyncRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ServerTimeSyncRule_Unit_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerTimeSyncRule)
namespace GlobalNamespace {
struct ServerTimeSyncRule_Unit;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerTimeSyncRule;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ServerTimeSyncRule*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServerTimeSyncRule*, "", "ServerTimeSyncRule");
// [CreateAssetMenu(fileName = "ServerTimeSyncRule", menuName = "Scriptable Objects/ServerTimeSyncRule")]
// Dependencies ServerTimeSyncRule::Unit, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerTimeSyncRule
class CORDL_TYPE ServerTimeSyncRule : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Unit = ::GlobalNamespace::ServerTimeSyncRule_Unit;

/// @brief Field unit, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_unit, put=__cordl_internal_set_unit)) ::GlobalNamespace::ServerTimeSyncRule_Unit  unit;

/// @brief Field value, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) int32_t  value;

/// @brief Method GetNext, addr 0x5b1e2d8, size 0x2bc, virtual false, abstract: false, final false
inline ::System::DateTime GetNext(::System::DateTime  dt) ;

/// @brief Method GetPrevious, addr 0x5b1e034, size 0x2a4, virtual false, abstract: false, final false
inline ::System::DateTime GetPrevious(::System::DateTime  dt) ;

static inline ::GlobalNamespace::ServerTimeSyncRule* New_ctor() ;

constexpr ::GlobalNamespace::ServerTimeSyncRule_Unit const& __cordl_internal_get_unit() const;

constexpr ::GlobalNamespace::ServerTimeSyncRule_Unit& __cordl_internal_get_unit() ;

constexpr int32_t const& __cordl_internal_get_value() const;

constexpr int32_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_unit(::GlobalNamespace::ServerTimeSyncRule_Unit  value) ;

constexpr void __cordl_internal_set_value(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b1e594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerTimeSyncRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeSyncRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerTimeSyncRule(ServerTimeSyncRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerTimeSyncRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerTimeSyncRule(ServerTimeSyncRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3591};

/// [SerializeField]
/// @brief Field unit, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ServerTimeSyncRule_Unit  ___unit;

/// [SerializeField]
/// @brief Field value, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerTimeSyncRule, ___unit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerTimeSyncRule, ___value) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServerTimeSyncRule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
