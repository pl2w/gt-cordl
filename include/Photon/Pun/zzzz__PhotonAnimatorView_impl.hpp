#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonAnimatorView.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_ParameterType_impl.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_SynchronizeType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_ParameterType_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_SynchronizeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonAnimatorView_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStreamQueue_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa72d048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa72d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.CacheDiscreteTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa72d4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"CacheDiscreteTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DoesLayerSynchronizeTypeExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView::*)(int32_t)>(&::Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa72d8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DoesLayerSynchronizeTypeExist", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DoesParameterSynchronizeTypeExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView::*)(::StringW)>(&::Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa72d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DoesParameterSynchronizeTypeExist", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetSynchronizedLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>* (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72da84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetSynchronizedLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetSynchronizedParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>* (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72da8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetSynchronizedParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetLayerSynchronizeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonAnimatorView_SynchronizeType (::Photon::Pun::PhotonAnimatorView::*)(int32_t)>(&::Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa72da94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetLayerSynchronizeType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.GetParameterSynchronizeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PhotonAnimatorView_SynchronizeType (::Photon::Pun::PhotonAnimatorView::*)(::StringW)>(&::Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa72dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetParameterSynchronizeType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SetLayerSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(int32_t, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType)>(&::Photon::Pun::PhotonAnimatorView::SetLayerSynchronized)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xa72dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SetLayerSynchronized", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SetParameterSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::StringW, ::GlobalNamespace::PhotonAnimatorView_ParameterType, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType)>(&::Photon::Pun::PhotonAnimatorView::SetParameterSynchronized)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa72def8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SetParameterSynchronized", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_ParameterType>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeDataContinuously
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::SerializeDataContinuously)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa72d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeDataContinuously", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeDataContinuously
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa72d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeDataContinuously", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeDataDiscretly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa72e14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeDataDiscretly", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeDataDiscretly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xa72e444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeDataDiscretly", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.SerializeSynchronizationTypeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa72e79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeSynchronizationTypeState", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.DeserializeSynchronizationTypeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*)>(&::Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa72e924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeSynchronizationTypeState", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa72eab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView::*)()>(&::Photon::Pun::PhotonAnimatorView::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa72ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_TriggerUsageWarningDone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerUsageWarningDone;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_TriggerUsageWarningDone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerUsageWarningDone;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_TriggerUsageWarningDone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerUsageWarningDone = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Animator;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Animator = value;
}
constexpr ::Photon::Pun::PhotonStreamQueue*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_StreamQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamQueue;
}
constexpr ::Photon::Pun::PhotonStreamQueue* const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_StreamQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StreamQueue;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_StreamQueue(::Photon::Pun::PhotonStreamQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StreamQueue = value;
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowLayerWeightsInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLayerWeightsInspector;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowLayerWeightsInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowLayerWeightsInspector;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_ShowLayerWeightsInspector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowLayerWeightsInspector = value;
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowParameterInspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowParameterInspector;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_ShowParameterInspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowParameterInspector;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_ShowParameterInspector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowParameterInspector = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeParameters;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>* const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeParameters;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_SynchronizeParameters(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeParameters = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeLayers;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>* const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_SynchronizeLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizeLayers;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_SynchronizeLayers(::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizeLayers = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_ReceiverPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReceiverPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_ReceiverPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReceiverPosition;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_ReceiverPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReceiverPosition = value;
}
constexpr float_t& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_LastDeserializeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDeserializeTime;
}
constexpr float_t const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_LastDeserializeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDeserializeTime;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_LastDeserializeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastDeserializeTime = value;
}
constexpr bool& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_WasSynchronizeTypeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasSynchronizeTypeChanged;
}
constexpr bool const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_WasSynchronizeTypeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasSynchronizeTypeChanged;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_WasSynchronizeTypeChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasSynchronizeTypeChanged = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_raisedDiscreteTriggersCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_raisedDiscreteTriggersCache;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Photon::Pun::PhotonAnimatorView::__cordl_internal_get_m_raisedDiscreteTriggersCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_raisedDiscreteTriggersCache;
}
constexpr void Photon::Pun::PhotonAnimatorView::__cordl_internal_set_m_raisedDiscreteTriggersCache(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_raisedDiscreteTriggersCache = value;
}
inline void Photon::Pun::PhotonAnimatorView::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::CacheDiscreteTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"CacheDiscreteTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView::DoesLayerSynchronizeTypeExist(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DoesLayerSynchronizeTypeExist", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex);
}
inline bool Photon::Pun::PhotonAnimatorView::DoesParameterSynchronizeTypeExist(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DoesParameterSynchronizeTypeExist", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>* Photon::Pun::PhotonAnimatorView::GetSynchronizedLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetSynchronizedLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>* Photon::Pun::PhotonAnimatorView::GetSynchronizedParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetSynchronizedParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonAnimatorView_SynchronizeType Photon::Pun::PhotonAnimatorView::GetLayerSynchronizeType(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetLayerSynchronizeType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>(this, ___internal_method, layerIndex);
}
inline ::GlobalNamespace::PhotonAnimatorView_SynchronizeType Photon::Pun::PhotonAnimatorView::GetParameterSynchronizeType(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"GetParameterSynchronizeType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>(this, ___internal_method, name);
}
inline void Photon::Pun::PhotonAnimatorView::SetLayerSynchronized(int32_t  layerIndex, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  synchronizeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SetLayerSynchronized", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, synchronizeType);
}
inline void Photon::Pun::PhotonAnimatorView::SetParameterSynchronized(::StringW  name, ::GlobalNamespace::PhotonAnimatorView_ParameterType  type, ::GlobalNamespace::PhotonAnimatorView_SynchronizeType  synchronizeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SetParameterSynchronized", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_ParameterType>(), ::i2c::type_of<::GlobalNamespace::PhotonAnimatorView_SynchronizeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type, synchronizeType);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeDataContinuously()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeDataContinuously", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeDataContinuously()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeDataContinuously", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeDataDiscretly(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeDataDiscretly", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeDataDiscretly(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeDataDiscretly", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::SerializeSynchronizationTypeState(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"SerializeSynchronizationTypeState", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::DeserializeSynchronizationTypeState(::Photon::Pun::PhotonStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"DeserializeSynchronizationTypeState", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void Photon::Pun::PhotonAnimatorView::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void Photon::Pun::PhotonAnimatorView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonAnimatorView* Photon::Pun::PhotonAnimatorView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  Photon::Pun::PhotonAnimatorView::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* Photon::Pun::PhotonAnimatorView::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView::PhotonAnimatorView()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0._SetParameterSynchronized_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::_SetParameterSynchronized_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*>(),
                        {"<SetParameterSynchronized>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::_SetParameterSynchronized_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*>(),
                        {"<SetParameterSynchronized>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass25_0::PhotonAnimatorView___c__DisplayClass25_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0._SetLayerSynchronized_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::_SetLayerSynchronized_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*>(),
                        {"<SetLayerSynchronized>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::__cordl_internal_get_layerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::__cordl_internal_get_layerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::__cordl_internal_set_layerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerIndex = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::_SetLayerSynchronized_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*>(),
                        {"<SetLayerSynchronized>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass24_0::PhotonAnimatorView___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0._GetParameterSynchronizeType_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::_GetParameterSynchronizeType_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*>(),
                        {"<GetParameterSynchronizeType>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::_GetParameterSynchronizeType_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*>(),
                        {"<GetParameterSynchronizeType>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass23_0::PhotonAnimatorView___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0._GetLayerSynchronizeType_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::_GetLayerSynchronizeType_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*>(),
                        {"<GetLayerSynchronizeType>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::__cordl_internal_get_layerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::__cordl_internal_get_layerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::__cordl_internal_set_layerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerIndex = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::_GetLayerSynchronizeType_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*>(),
                        {"<GetLayerSynchronizeType>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass22_0::PhotonAnimatorView___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0._DoesParameterSynchronizeTypeExist_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::_DoesParameterSynchronizeTypeExist_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*>(),
                        {"<DoesParameterSynchronizeTypeExist>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::_DoesParameterSynchronizeTypeExist_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*>(),
                        {"<DoesParameterSynchronizeTypeExist>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass19_0::PhotonAnimatorView___c__DisplayClass19_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::*)()>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0._DoesLayerSynchronizeTypeExist_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::*)(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*)>(&::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::_DoesLayerSynchronizeTypeExist_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa73e8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*>(),
                        {"<DoesLayerSynchronizeTypeExist>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::__cordl_internal_get_layerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr int32_t const& Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::__cordl_internal_get_layerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerIndex;
}
constexpr void Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::__cordl_internal_set_layerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerIndex = value;
}
inline void Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::_DoesLayerSynchronizeTypeExist_b__0(::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*>(),
                        {"<DoesLayerSynchronizeTypeExist>b__0", {}, {::i2c::type_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0* Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView___c__DisplayClass18_0::PhotonAnimatorView___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView_SynchronizedLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView_SynchronizedLayer::*)()>(&::Photon::Pun::PhotonAnimatorView_SynchronizedLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType& Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_get_SynchronizeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeType;
}
constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType const& Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_get_SynchronizeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeType;
}
constexpr void Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_set_SynchronizeType(::GlobalNamespace::PhotonAnimatorView_SynchronizeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynchronizeType = value;
}
constexpr int32_t& Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_get_LayerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerIndex;
}
constexpr int32_t const& Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_get_LayerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerIndex;
}
constexpr void Photon::Pun::PhotonAnimatorView_SynchronizedLayer::__cordl_internal_set_LayerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerIndex = value;
}
inline void Photon::Pun::PhotonAnimatorView_SynchronizedLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonAnimatorView_SynchronizedLayer* Photon::Pun::PhotonAnimatorView_SynchronizedLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView_SynchronizedLayer*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView_SynchronizedLayer::PhotonAnimatorView_SynchronizedLayer()   {
}
//  Writing Method size for method: ::Photon::Pun::PhotonAnimatorView_SynchronizedParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonAnimatorView_SynchronizedParameter::*)()>(&::Photon::Pun::PhotonAnimatorView_SynchronizedParameter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa73e8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PhotonAnimatorView_ParameterType& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::GlobalNamespace::PhotonAnimatorView_ParameterType const& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_set_Type(::GlobalNamespace::PhotonAnimatorView_ParameterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_SynchronizeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeType;
}
constexpr ::GlobalNamespace::PhotonAnimatorView_SynchronizeType const& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_SynchronizeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeType;
}
constexpr void Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_set_SynchronizeType(::GlobalNamespace::PhotonAnimatorView_SynchronizeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynchronizeType = value;
}
constexpr ::StringW& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Photon::Pun::PhotonAnimatorView_SynchronizedParameter::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void Photon::Pun::PhotonAnimatorView_SynchronizedParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonAnimatorView_SynchronizedParameter* Photon::Pun::PhotonAnimatorView_SynchronizedParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonAnimatorView_SynchronizedParameter*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonAnimatorView_SynchronizedParameter::PhotonAnimatorView_SynchronizedParameter()   {
}
