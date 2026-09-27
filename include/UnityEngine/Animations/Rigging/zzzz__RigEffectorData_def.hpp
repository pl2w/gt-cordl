#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigEffectorData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigEffectorData_Style_def.hpp"
CORDL_MODULE_EXPORT(RigEffectorData)
namespace GlobalNamespace {
struct RigEffectorData_Style;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigEffectorData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigEffectorData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigEffectorData*, "UnityEngine.Animations.Rigging", "RigEffectorData");
// Dependencies System.Object, UnityEngine.Animations.Rigging.RigEffectorData::Style
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigEffectorData
class CORDL_TYPE RigEffectorData : public ::System::Object {
public:
// Declarations
using Style = ::GlobalNamespace::RigEffectorData_Style;

/// @brief Field m_Style, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_Style, put=__cordl_internal_set_m_Style)) ::GlobalNamespace::RigEffectorData_Style  m_Style;

/// @brief Field m_Transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Transform, put=__cordl_internal_set_m_Transform)) ::UnityW<::UnityEngine::Transform>  m_Transform;

/// @brief Field m_Visible, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Visible, put=__cordl_internal_set_m_Visible)) bool  m_Visible;

static inline ::UnityEngine::Animations::Rigging::RigEffectorData* New_ctor() ;

constexpr ::GlobalNamespace::RigEffectorData_Style const& __cordl_internal_get_m_Style() const;

constexpr ::GlobalNamespace::RigEffectorData_Style& __cordl_internal_get_m_Style() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_Transform() ;

constexpr bool const& __cordl_internal_get_m_Visible() const;

constexpr bool& __cordl_internal_get_m_Visible() ;

constexpr void __cordl_internal_set_m_Style(::GlobalNamespace::RigEffectorData_Style  value) ;

constexpr void __cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_Visible(bool  value) ;

/// @brief Method .ctor, addr 0xae7f9b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEffectorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEffectorData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEffectorData(RigEffectorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEffectorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEffectorData(RigEffectorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32323};

/// [SerializeField]
/// @brief Field m_Transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_Transform;

/// [SerializeField]
/// @brief Field m_Style, offset: 0x18, size: 0x38, def value: None
 ::GlobalNamespace::RigEffectorData_Style  ___m_Style;

/// [SerializeField]
/// @brief Field m_Visible, offset: 0x50, size: 0x1, def value: None
 bool  ___m_Visible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::RigEffectorData, ___m_Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigEffectorData, ___m_Style) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigEffectorData, ___m_Visible) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::RigEffectorData) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
