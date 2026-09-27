#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonAnimatorView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_ParameterType_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_SynchronizeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonAnimatorView)
namespace GlobalNamespace {
struct PhotonAnimatorView_ParameterType;
}
namespace GlobalNamespace {
struct PhotonAnimatorView_SynchronizeType;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
class PhotonAnimatorView_SynchronizedLayer;
}
namespace Photon::Pun {
class PhotonAnimatorView_SynchronizedParameter;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass18_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass19_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass22_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass23_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass24_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass25_0;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStreamQueue;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonAnimatorView;
}
namespace Photon::Pun {
class PhotonAnimatorView_SynchronizedLayer;
}
namespace Photon::Pun {
class PhotonAnimatorView_SynchronizedParameter;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass18_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass19_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass22_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass23_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass24_0;
}
namespace Photon::Pun {
class PhotonAnimatorView___c__DisplayClass25_0;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonAnimatorView*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*);
MARK_REF_T(::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView*, "Photon.Pun", "PhotonAnimatorView");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*, "Photon.Pun", "PhotonAnimatorView/SynchronizedLayer");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*, "Photon.Pun", "PhotonAnimatorView/SynchronizedParameter");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass19_0");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass25_0");
// [AddComponentMenu("Photon Networking/Photon Animator View")]
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Vector3
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView
class CORDL_TYPE PhotonAnimatorView : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using ParameterType = ::GlobalNamespace::PhotonAnimatorView_ParameterType;

using SynchronizeType = ::GlobalNamespace::PhotonAnimatorView_SynchronizeType;

using SynchronizedLayer = ::Photon::Pun::PhotonAnimatorView_SynchronizedLayer;

using SynchronizedParameter = ::Photon::Pun::PhotonAnimatorView_SynchronizedParameter;

using __c__DisplayClass18_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0;

using __c__DisplayClass19_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0;

using __c__DisplayClass22_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0;

using __c__DisplayClass23_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0;

using __c__DisplayClass24_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0;

using __c__DisplayClass25_0 = ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0;

/// @brief Field ShowLayerWeightsInspector, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowLayerWeightsInspector, put=__cordl_internal_set_ShowLayerWeightsInspector)) bool  ShowLayerWeightsInspector;

/// @brief Field ShowParameterInspector, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowParameterInspector, put=__cordl_internal_set_ShowParameterInspector)) bool  ShowParameterInspector;

/// @brief Field TriggerUsageWarningDone, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_TriggerUsageWarningDone, put=__cordl_internal_set_TriggerUsageWarningDone)) bool  TriggerUsageWarningDone;

/// @brief Field m_Animator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Animator, put=__cordl_internal_set_m_Animator)) ::UnityW<::UnityEngine::Animator>  m_Animator;

/// @brief Field m_LastDeserializeTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastDeserializeTime, put=__cordl_internal_set_m_LastDeserializeTime)) float_t  m_LastDeserializeTime;

/// @brief Field m_ReceiverPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_ReceiverPosition, put=__cordl_internal_set_m_ReceiverPosition)) ::UnityEngine::Vector3  m_ReceiverPosition;

/// @brief Field m_StreamQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StreamQueue, put=__cordl_internal_set_m_StreamQueue)) ::Photon::Pun::PhotonStreamQueue*  m_StreamQueue;

/// @brief Field m_SynchronizeLayers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeLayers, put=__cordl_internal_set_m_SynchronizeLayers)) ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*  m_SynchronizeLayers;

/// @brief Field m_SynchronizeParameters, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SynchronizeParameters, put=__cordl_internal_set_m_SynchronizeParameters)) ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*  m_SynchronizeParameters;

/// @brief Field m_WasSynchronizeTypeChanged, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasSynchronizeTypeChanged, put=__cordl_internal_set_m_WasSynchronizeTypeChanged)) bool  m_WasSynchronizeTypeChanged;

/// @brief Field m_raisedDiscreteTriggersCache, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_raisedDiscreteTriggersCache, put=__cordl_internal_set_m_raisedDiscreteTriggersCache)) ::System::Collections::Generic::List_1<::StringW>*  m_raisedDiscreteTriggersCache;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Awake, addr 0xa72d048, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheDiscreteTriggers, addr 0xa72d4ac, size 0x154, virtual false, abstract: false, final false
inline void CacheDiscreteTriggers() ;

/// @brief Method DeserializeDataContinuously, addr 0xa72d600, size 0x2b0, virtual false, abstract: false, final false
inline void DeserializeDataContinuously() ;

/// @brief Method DeserializeDataDiscretly, addr 0xa72e444, size 0x358, virtual false, abstract: false, final false
inline void DeserializeDataDiscretly(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method DeserializeSynchronizationTypeState, addr 0xa72e924, size 0x190, virtual false, abstract: false, final false
inline void DeserializeSynchronizationTypeState(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method DoesLayerSynchronizeTypeExist, addr 0xa72d8b0, size 0xe4, virtual false, abstract: false, final false
inline bool DoesLayerSynchronizeTypeExist(int32_t  layerIndex) ;

/// @brief Method DoesParameterSynchronizeTypeExist, addr 0xa72d994, size 0xf0, virtual false, abstract: false, final false
inline bool DoesParameterSynchronizeTypeExist(::StringW  name) ;

/// @brief Method GetLayerSynchronizeType, addr 0xa72da94, size 0x11c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PhotonAnimatorView_SynchronizeType GetLayerSynchronizeType(int32_t  layerIndex) ;

/// @brief Method GetParameterSynchronizeType, addr 0xa72dbb0, size 0x128, virtual false, abstract: false, final false
inline ::GlobalNamespace::PhotonAnimatorView_SynchronizeType GetParameterSynchronizeType(::StringW  name) ;

/// @brief Method GetSynchronizedLayers, addr 0xa72da84, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>* GetSynchronizedLayers() ;

/// @brief Method GetSynchronizedParameters, addr 0xa72da8c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>* GetSynchronizedParameters() ;

static inline ::Photon::Pun::PhotonAnimatorView* New_ctor() ;

/// @brief Method OnPhotonSerializeView, addr 0xa72eab4, size 0x12c, virtual true, abstract: false, final true
inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SerializeDataContinuously, addr 0xa72d1c0, size 0x2ec, virtual false, abstract: false, final false
inline void SerializeDataContinuously() ;

/// @brief Method SerializeDataDiscretly, addr 0xa72e14c, size 0x2f8, virtual false, abstract: false, final false
inline void SerializeDataDiscretly(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SerializeSynchronizationTypeState, addr 0xa72e79c, size 0x188, virtual false, abstract: false, final false
inline void SerializeSynchronizationTypeState(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetLayerSynchronized, addr 0xa72dcd8, size 0x220, virtual false, abstract: false, final false
inline void SetLayerSynchronized(int32_t  layerIndex, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  synchronizeType) ;

/// @brief Method SetParameterSynchronized, addr 0xa72def8, size 0x254, virtual false, abstract: false, final false
inline void SetParameterSynchronized(::StringW  name, ::GlobalNamespace::PhotonAnimatorView_ParameterType  type, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  synchronizeType) ;

/// @brief Method Update, addr 0xa72d0a0, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_ShowLayerWeightsInspector() const;

constexpr bool& __cordl_internal_get_ShowLayerWeightsInspector() ;

constexpr bool const& __cordl_internal_get_ShowParameterInspector() const;

constexpr bool& __cordl_internal_get_ShowParameterInspector() ;

constexpr bool const& __cordl_internal_get_TriggerUsageWarningDone() const;

constexpr bool& __cordl_internal_get_TriggerUsageWarningDone() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_Animator() ;

constexpr float_t const& __cordl_internal_get_m_LastDeserializeTime() const;

constexpr float_t& __cordl_internal_get_m_LastDeserializeTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ReceiverPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ReceiverPosition() ;

constexpr ::Photon::Pun::PhotonStreamQueue* const& __cordl_internal_get_m_StreamQueue() const;

constexpr ::Photon::Pun::PhotonStreamQueue*& __cordl_internal_get_m_StreamQueue() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>* const& __cordl_internal_get_m_SynchronizeLayers() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*& __cordl_internal_get_m_SynchronizeLayers() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>* const& __cordl_internal_get_m_SynchronizeParameters() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*& __cordl_internal_get_m_SynchronizeParameters() ;

constexpr bool const& __cordl_internal_get_m_WasSynchronizeTypeChanged() const;

constexpr bool& __cordl_internal_get_m_WasSynchronizeTypeChanged() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_raisedDiscreteTriggersCache() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_raisedDiscreteTriggersCache() ;

constexpr void __cordl_internal_set_ShowLayerWeightsInspector(bool  value) ;

constexpr void __cordl_internal_set_ShowParameterInspector(bool  value) ;

constexpr void __cordl_internal_set_TriggerUsageWarningDone(bool  value) ;

constexpr void __cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_m_LastDeserializeTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ReceiverPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_StreamQueue(::Photon::Pun::PhotonStreamQueue*  value) ;

constexpr void __cordl_internal_set_m_SynchronizeLayers(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*  value) ;

constexpr void __cordl_internal_set_m_SynchronizeParameters(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*  value) ;

constexpr void __cordl_internal_set_m_WasSynchronizeTypeChanged(bool  value) ;

constexpr void __cordl_internal_set_m_raisedDiscreteTriggersCache(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa72ebe0, size 0x178, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView(PhotonAnimatorView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView(PhotonAnimatorView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29733};

/// @brief Field TriggerUsageWarningDone, offset: 0x28, size: 0x1, def value: None
 bool  ___TriggerUsageWarningDone;

/// @brief Field m_Animator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___m_Animator;

/// @brief Field m_StreamQueue, offset: 0x38, size: 0x8, def value: None
 ::Photon::Pun::PhotonStreamQueue*  ___m_StreamQueue;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field ShowLayerWeightsInspector, offset: 0x40, size: 0x1, def value: None
 bool  ___ShowLayerWeightsInspector;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field ShowParameterInspector, offset: 0x41, size: 0x1, def value: None
 bool  ___ShowParameterInspector;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_SynchronizeParameters, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*  ___m_SynchronizeParameters;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_SynchronizeLayers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*  ___m_SynchronizeLayers;

/// @brief Field m_ReceiverPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_ReceiverPosition;

/// @brief Field m_LastDeserializeTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_LastDeserializeTime;

/// @brief Field m_WasSynchronizeTypeChanged, offset: 0x68, size: 0x1, def value: None
 bool  ___m_WasSynchronizeTypeChanged;

/// @brief Field m_raisedDiscreteTriggersCache, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_raisedDiscreteTriggersCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___TriggerUsageWarningDone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_Animator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_StreamQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___ShowLayerWeightsInspector) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___ShowParameterInspector) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_SynchronizeParameters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_SynchronizeLayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_ReceiverPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_LastDeserializeTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_WasSynchronizeTypeChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView, ___m_raisedDiscreteTriggersCache) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView) == 0x78, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass25_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <SetParameterSynchronized>b__0, addr 0xa73e9ac, size 0x20, virtual false, abstract: false, final false
inline bool _SetParameterSynchronized_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa73e9a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass25_0(PhotonAnimatorView___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass25_0(PhotonAnimatorView___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29732};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field layerIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIndex, put=__cordl_internal_set_layerIndex)) int32_t  layerIndex;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <SetLayerSynchronized>b__0, addr 0xa73e984, size 0x20, virtual false, abstract: false, final false
inline bool _SetLayerSynchronized_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item) ;

constexpr int32_t const& __cordl_internal_get_layerIndex() const;

constexpr int32_t& __cordl_internal_get_layerIndex() ;

constexpr void __cordl_internal_set_layerIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa73e97c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass24_0(PhotonAnimatorView___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass24_0(PhotonAnimatorView___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29731};

/// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___layerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0, ___layerIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass23_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <GetParameterSynchronizeType>b__0, addr 0xa73e95c, size 0x20, virtual false, abstract: false, final false
inline bool _GetParameterSynchronizeType_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa73e954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass23_0(PhotonAnimatorView___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass23_0(PhotonAnimatorView___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29730};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass22_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field layerIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIndex, put=__cordl_internal_set_layerIndex)) int32_t  layerIndex;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <GetLayerSynchronizeType>b__0, addr 0xa73e934, size 0x20, virtual false, abstract: false, final false
inline bool _GetLayerSynchronizeType_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item) ;

constexpr int32_t const& __cordl_internal_get_layerIndex() const;

constexpr int32_t& __cordl_internal_get_layerIndex() ;

constexpr void __cordl_internal_set_layerIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa73e92c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass22_0(PhotonAnimatorView___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass22_0(PhotonAnimatorView___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29729};

/// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___layerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0, ___layerIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass19_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <DoesParameterSynchronizeTypeExist>b__0, addr 0xa73e90c, size 0x20, virtual false, abstract: false, final false
inline bool _DoesParameterSynchronizeTypeExist_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa73e904, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass19_0(PhotonAnimatorView___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass19_0(PhotonAnimatorView___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29728};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass18_0
class CORDL_TYPE PhotonAnimatorView___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field layerIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIndex, put=__cordl_internal_set_layerIndex)) int32_t  layerIndex;

static inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <DoesLayerSynchronizeTypeExist>b__0, addr 0xa73e8e4, size 0x20, virtual false, abstract: false, final false
inline bool _DoesLayerSynchronizeTypeExist_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item) ;

constexpr int32_t const& __cordl_internal_get_layerIndex() const;

constexpr int32_t& __cordl_internal_get_layerIndex() ;

constexpr void __cordl_internal_set_layerIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa73e8dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView___c__DisplayClass18_0(PhotonAnimatorView___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView___c__DisplayClass18_0(PhotonAnimatorView___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29727};

/// @brief Field layerIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___layerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0, ___layerIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// Dependencies Photon.Pun.PhotonAnimatorView::SynchronizeType, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/SynchronizedLayer
class CORDL_TYPE PhotonAnimatorView_SynchronizedLayer : public ::System::Object {
public:
// Declarations
/// @brief Field LayerIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_LayerIndex, put=__cordl_internal_set_LayerIndex)) int32_t  LayerIndex;

/// @brief Field SynchronizeType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_SynchronizeType, put=__cordl_internal_set_SynchronizeType)) ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  SynchronizeType;

static inline ::Photon::Pun::PhotonAnimatorView_SynchronizedLayer* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_LayerIndex() const;

constexpr int32_t& __cordl_internal_get_LayerIndex() ;

constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType const& __cordl_internal_get_SynchronizeType() const;

constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType& __cordl_internal_get_SynchronizeType() ;

constexpr void __cordl_internal_set_LayerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_SynchronizeType(::GlobalNamespace::PhotonAnimatorView_SynchronizeType  value) ;

/// @brief Method .ctor, addr 0xa73e8d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView_SynchronizedLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView_SynchronizedLayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView_SynchronizedLayer(PhotonAnimatorView_SynchronizedLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView_SynchronizedLayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView_SynchronizedLayer(PhotonAnimatorView_SynchronizedLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29726};

/// @brief Field SynchronizeType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  ___SynchronizeType;

/// @brief Field LayerIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___LayerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer, ___SynchronizeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer, ___LayerIndex) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
// Dependencies Photon.Pun.PhotonAnimatorView::ParameterType, Photon.Pun.PhotonAnimatorView::SynchronizeType, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonAnimatorView/SynchronizedParameter
class CORDL_TYPE PhotonAnimatorView_SynchronizedParameter : public ::System::Object {
public:
// Declarations
/// @brief Field Name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SynchronizeType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SynchronizeType, put=__cordl_internal_set_SynchronizeType)) ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  SynchronizeType;

/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::PhotonAnimatorView_ParameterType  Type;

static inline ::Photon::Pun::PhotonAnimatorView_SynchronizedParameter* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType const& __cordl_internal_get_SynchronizeType() const;

constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType& __cordl_internal_get_SynchronizeType() ;

constexpr ::GlobalNamespace::PhotonAnimatorView_ParameterType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::PhotonAnimatorView_ParameterType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SynchronizeType(::GlobalNamespace::PhotonAnimatorView_SynchronizeType  value) ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::PhotonAnimatorView_ParameterType  value) ;

/// @brief Method .ctor, addr 0xa73e8cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView_SynchronizedParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView_SynchronizedParameter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonAnimatorView_SynchronizedParameter(PhotonAnimatorView_SynchronizedParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonAnimatorView_SynchronizedParameter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonAnimatorView_SynchronizedParameter(PhotonAnimatorView_SynchronizedParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29725};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PhotonAnimatorView_ParameterType  ___Type;

/// @brief Field SynchronizeType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  ___SynchronizeType;

/// @brief Field Name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter, ___SynchronizeType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter, ___Name) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun
