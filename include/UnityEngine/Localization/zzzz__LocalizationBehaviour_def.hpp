#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizationBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizationBehaviour)
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizationBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizationBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizationBehaviour*, "UnityEngine.Localization", "LocalizationBehaviour");
// Dependencies UnityEngine.ResourceManagement.Util.ComponentSingleton`1<T>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizationBehaviour
class CORDL_TYPE LocalizationBehaviour : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::UnityEngine::Localization::LocalizationBehaviour>> {
public:
// Declarations
/// @brief Field m_ReleaseQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReleaseQueue, put=__cordl_internal_set_m_ReleaseQueue)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*  m_ReleaseQueue;

/// @brief Method DoReleaseNextFrame, addr 0xb015934, size 0xd0, virtual false, abstract: false, final false
inline void DoReleaseNextFrame(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method ForceRelease, addr 0xb015bb8, size 0x1b8, virtual false, abstract: false, final false
static inline void ForceRelease() ;

/// @brief Method GetGameObjectName, addr 0xb015884, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetGameObjectName() ;

/// @brief Method LateUpdate, addr 0xb015a3c, size 0x17c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::Localization::LocalizationBehaviour* New_ctor() ;

/// @brief Method ReleaseNextFrame, addr 0xb0158c4, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseNextFrame(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method TimeSinceStartupMs, addr 0xb015a04, size 0x38, virtual false, abstract: false, final false
static inline int64_t TimeSinceStartupMs() ;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>* const& __cordl_internal_get_m_ReleaseQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*& __cordl_internal_get_m_ReleaseQueue() ;

constexpr void __cordl_internal_set_m_ReleaseQueue(::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*  value) ;

/// @brief Method .ctor, addr 0xb015d70, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationBehaviour(LocalizationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationBehaviour(LocalizationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25066};

/// @brief Field k_DisableThrottling offset 0xffffffff size 0x1
static constexpr bool  k_DisableThrottling{false};

/// @brief Field k_MaxMsPerUpdate offset 0xffffffff size 0x8
static constexpr int64_t  k_MaxMsPerUpdate{static_cast<int64_t>(0xa)};

/// [TupleElementNames(new[] { "frame", "handle" })]
/// @brief Field m_ReleaseQueue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::System::ValueTuple_2<int32_t,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>*  ___m_ReleaseQueue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizationBehaviour, ___m_ReleaseQueue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizationBehaviour) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization
