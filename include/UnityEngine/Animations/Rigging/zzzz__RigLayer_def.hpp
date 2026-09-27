#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigConstraint_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RigLayer)
namespace UnityEngine::Animations::Rigging {
class IRigConstraint;
}
namespace UnityEngine::Animations::Rigging {
class IRigLayer;
}
namespace UnityEngine::Animations::Rigging {
class Rig;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigLayer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigLayer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigLayer*, "UnityEngine.Animations.Rigging", "RigLayer");
// Dependencies System.Object, UnityEngine.Animations.IAnimationJob, UnityEngine.Animations.Rigging.IRigConstraint
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigLayer
class CORDL_TYPE RigLayer : public ::System::Object {
public:
// Declarations
/// @brief Field <isInitialized>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized_k__BackingField, put=__cordl_internal_set__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

 __declspec(property(get=get_active)) bool  active;

 __declspec(property(get=get_constraints)) ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints;

 __declspec(property(get=get_isInitialized, put=set_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_jobs)) ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  jobs;

/// @brief Field m_Active, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Active, put=__cordl_internal_set_m_Active)) bool  m_Active;

/// @brief Field m_Constraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Constraints, put=__cordl_internal_set_m_Constraints)) ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  m_Constraints;

/// @brief Field m_Jobs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Jobs, put=__cordl_internal_set_m_Jobs)) ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  m_Jobs;

/// @brief Field m_Rig, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rig, put=__cordl_internal_set_m_Rig)) ::UnityW<::UnityEngine::Animations::Rigging::Rig>  m_Rig;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_rig)) ::UnityW<::UnityEngine::Animations::Rigging::Rig>  rig;

/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IRigLayer"
constexpr operator  ::UnityEngine::Animations::Rigging::IRigLayer*() noexcept;

/// @brief Method Initialize, addr 0xae7aaa4, size 0x114, virtual true, abstract: false, final true
inline bool Initialize(::UnityEngine::Animator*  animator) ;

/// @brief Method IsValid, addr 0xae7b224, size 0x7c, virtual true, abstract: false, final true
inline bool IsValid() ;

/// @brief Method Reset, addr 0xae7b06c, size 0xa0, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0xae7af4c, size 0x120, virtual true, abstract: false, final true
inline void Update() ;

constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__isInitialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_Active() const;

constexpr bool& __cordl_internal_get_m_Active() ;

constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> const& __cordl_internal_get_m_Constraints() const;

constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>& __cordl_internal_get_m_Constraints() ;

constexpr ::ArrayW<::UnityEngine::Animations::IAnimationJob*> const& __cordl_internal_get_m_Jobs() const;

constexpr ::ArrayW<::UnityEngine::Animations::IAnimationJob*>& __cordl_internal_get_m_Jobs() ;

constexpr ::UnityW<::UnityEngine::Animations::Rigging::Rig> const& __cordl_internal_get_m_Rig() const;

constexpr ::UnityW<::UnityEngine::Animations::Rigging::Rig>& __cordl_internal_get_m_Rig() ;

constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Active(bool  value) ;

constexpr void __cordl_internal_set_m_Constraints(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  value) ;

constexpr void __cordl_internal_set_m_Jobs(::ArrayW<::UnityEngine::Animations::IAnimationJob*>  value) ;

constexpr void __cordl_internal_set_m_Rig(::UnityW<::UnityEngine::Animations::Rigging::Rig>  value) ;

/// @brief Method get_active, addr 0xae7a9b4, size 0x8, virtual true, abstract: false, final true
inline bool get_active() ;

/// @brief Method get_constraints, addr 0xae7aa64, size 0x18, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> get_constraints() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0xae7aa94, size 0x8, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_jobs, addr 0xae7aa7c, size 0x18, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Animations::IAnimationJob*> get_jobs() ;

/// @brief Method get_name, addr 0xae7a9bc, size 0xa8, virtual true, abstract: false, final true
inline ::StringW get_name() ;

/// @brief Method get_rig, addr 0xae7a9ac, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Animations::Rigging::Rig> get_rig() ;

/// @brief Convert to "::UnityEngine::Animations::Rigging::IRigLayer"
constexpr ::UnityEngine::Animations::Rigging::IRigLayer* i___UnityEngine__Animations__Rigging__IRigLayer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0xae7aa9c, size 0x8, virtual false, abstract: false, final false
inline void set_isInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigLayer(RigLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigLayer(RigLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32307};

/// [SerializeField]
/// [FormerlySerializedAs("rig")]
/// @brief Field m_Rig, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animations::Rigging::Rig>  ___m_Rig;

/// [SerializeField]
/// [FormerlySerializedAs("active")]
/// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Active;

/// @brief Field m_Constraints, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  ___m_Constraints;

/// @brief Field m_Jobs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  ___m_Jobs;

/// [CompilerGenerated]
/// @brief Field <isInitialized>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____isInitialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::RigLayer, ___m_Rig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigLayer, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigLayer, ___m_Constraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigLayer, ___m_Jobs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigLayer, ____isInitialized_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::RigLayer) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
