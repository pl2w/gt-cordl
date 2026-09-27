#pragma once
// IWYU pragma private; include "GlobalNamespace/GRHealthMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRHealthMeter)
namespace GlobalNamespace {
class GRHealthMeterNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRHealthMeter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRHealthMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRHealthMeter*, "", "GRHealthMeter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRHealthMeter
class CORDL_TYPE GRHealthMeter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field maxHP, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHP, put=__cordl_internal_set_maxHP)) int32_t  maxHP;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*  nodes;

static inline ::GlobalNamespace::GRHealthMeter* New_ctor() ;

/// @brief Method SetHP, addr 0x589e030, size 0x114, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method Setup, addr 0x589e028, size 0x8, virtual false, abstract: false, final false
inline void Setup(int32_t  maxHP) ;

constexpr int32_t const& __cordl_internal_get_maxHP() const;

constexpr int32_t& __cordl_internal_get_maxHP() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>* const& __cordl_internal_get_nodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*& __cordl_internal_get_nodes() ;

constexpr void __cordl_internal_set_maxHP(int32_t  value) ;

constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*  value) ;

/// @brief Method .ctor, addr 0x589e230, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRHealthMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRHealthMeter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRHealthMeter(GRHealthMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRHealthMeter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRHealthMeter(GRHealthMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1984};

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRHealthMeterNode>>*  ___nodes;

/// @brief Field maxHP, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxHP;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRHealthMeter, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRHealthMeter, ___maxHP) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRHealthMeter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
