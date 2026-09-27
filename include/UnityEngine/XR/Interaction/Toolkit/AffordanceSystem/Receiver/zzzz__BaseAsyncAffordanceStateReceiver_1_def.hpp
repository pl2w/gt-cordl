#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseAsyncAffordanceStateReceiver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAffordanceStateReceiver_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseAsyncAffordanceStateReceiver_1)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template<typename T>
struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAsyncAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
template<typename T>
class BaseAsyncAffordanceStateReceiver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "BaseAsyncAffordanceStateReceiver`1");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1<T>, UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1<T>
class CORDL_TYPE BaseAsyncAffordanceStateReceiver_1 : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T> {
public:
// Declarations
/// @brief Field m_JobOutputStore, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_JobOutputStore, put=__cordl_internal_set_m_JobOutputStore)) ::Unity::Collections::NativeArray_1<T>  m_JobOutputStore;

/// @brief Field m_LastJobHandle, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LastJobHandle, put=__cordl_internal_set_m_LastJobHandle)) ::Unity::Jobs::JobHandle  m_LastJobHandle;

/// @brief Field m_NativeCurve, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_NativeCurve, put=__cordl_internal_set_m_NativeCurve)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  m_NativeCurve;

/// @brief Field m_OutputInitialized, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OutputInitialized, put=__cordl_internal_set_m_OutputInitialized)) bool  m_OutputInitialized;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*() noexcept;

/// @brief Method GetJobOutputStore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<T> GetJobOutputStore() ;

/// @brief Method HandleTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Unity::Jobs::JobHandle HandleTween(float_t  tweenTarget) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>* New_ctor() ;

/// @brief Method OnAffordanceThemeChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAffordanceThemeChanged(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*  newValue) ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ScheduleTweenJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Jobs::JobHandle ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>>  jobData) ;

/// @brief Method UpdateStateFromCompletedJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateStateFromCompletedJob() ;

constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_JobOutputStore() const;

constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_JobOutputStore() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_m_LastJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_m_LastJobHandle() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve const& __cordl_internal_get_m_NativeCurve() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& __cordl_internal_get_m_NativeCurve() ;

constexpr bool const& __cordl_internal_get_m_OutputInitialized() const;

constexpr bool& __cordl_internal_get_m_OutputInitialized() ;

constexpr void __cordl_internal_set_m_JobOutputStore(::Unity::Collections::NativeArray_1<T>  value) ;

constexpr void __cordl_internal_set_m_LastJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_m_NativeCurve(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  value) ;

constexpr void __cordl_internal_set_m_OutputInitialized(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAsyncAffordanceStateReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAsyncAffordanceStateReceiver_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAsyncAffordanceStateReceiver_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAsyncAffordanceStateReceiver_1(BaseAsyncAffordanceStateReceiver_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAsyncAffordanceStateReceiver_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAsyncAffordanceStateReceiver_1(BaseAsyncAffordanceStateReceiver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11745};

/// @brief Field m_JobOutputStore, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  ___m_JobOutputStore;

/// @brief Field m_NativeCurve, offset: 0x68, size: 0x18, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  ___m_NativeCurve;

/// @brief Field m_LastJobHandle, offset: 0x80, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___m_LastJobHandle;

/// @brief Field m_OutputInitialized, offset: 0x90, size: 0x1, def value: None
 bool  ___m_OutputInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
