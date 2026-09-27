#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/SyncSceneToStreamLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncSceneToStreamLayer)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Animations::Rigging {
class IAnimationJobData;
}
namespace UnityEngine::Animations::Rigging {
class IRigLayer;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class SyncSceneToStreamLayer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*, "UnityEngine.Animations.Rigging", "SyncSceneToStreamLayer");
// Dependencies System.Object
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.SyncSceneToStreamLayer
class CORDL_TYPE SyncSceneToStreamLayer : public ::System::Object {
public:
// Declarations
/// @brief Field <isInitialized>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized_k__BackingField, put=__cordl_internal_set__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

 __declspec(property(get=get_isInitialized, put=set_isInitialized)) bool  isInitialized;

/// @brief Field job, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::UnityEngine::Animations::IAnimationJob*  job;

/// @brief Field m_Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) ::UnityEngine::Animations::Rigging::IAnimationJobData*  m_Data;

/// @brief Field m_RigIndices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RigIndices, put=__cordl_internal_set_m_RigIndices)) ::System::Collections::Generic::List_1<int32_t>*  m_RigIndices;

/// @brief Method Initialize, addr 0xae7a480, size 0x4a0, virtual false, abstract: false, final false
inline bool Initialize(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers) ;

/// @brief Method IsValid, addr 0xae7a920, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* New_ctor() ;

/// @brief Method Reset, addr 0xae78c60, size 0x1ac, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0xae781ac, size 0x3e0, virtual false, abstract: false, final false
inline void Update(::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers) ;

constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__isInitialized_k__BackingField() ;

constexpr ::UnityEngine::Animations::IAnimationJob* const& __cordl_internal_get_job() const;

constexpr ::UnityEngine::Animations::IAnimationJob*& __cordl_internal_get_job() ;

constexpr ::UnityEngine::Animations::Rigging::IAnimationJobData* const& __cordl_internal_get_m_Data() const;

constexpr ::UnityEngine::Animations::Rigging::IAnimationJobData*& __cordl_internal_get_m_Data() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_RigIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_RigIndices() ;

constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_job(::UnityEngine::Animations::IAnimationJob*  value) ;

constexpr void __cordl_internal_set_m_Data(::UnityEngine::Animations::Rigging::IAnimationJobData*  value) ;

constexpr void __cordl_internal_set_m_RigIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xae79d10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0xae7e274, size 0x8, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0xae7e27c, size 0x8, virtual false, abstract: false, final false
inline void set_isInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSceneToStreamLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSceneToStreamLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSceneToStreamLayer(SyncSceneToStreamLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSceneToStreamLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSceneToStreamLayer(SyncSceneToStreamLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32312};

/// [CompilerGenerated]
/// @brief Field <isInitialized>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____isInitialized_k__BackingField;

/// @brief Field job, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Animations::IAnimationJob*  ___job;

/// @brief Field m_Data, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Animations::Rigging::IAnimationJobData*  ___m_Data;

/// @brief Field m_RigIndices, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_RigIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer, ____isInitialized_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer, ___job) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer, ___m_Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer, ___m_RigIndices) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
