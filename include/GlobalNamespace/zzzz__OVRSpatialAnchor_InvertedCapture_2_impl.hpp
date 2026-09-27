#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_InvertedCapture_2.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_InvertedCapture_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename TResult,typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::setStaticF_s_delegate(::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*, "s_delegate", ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>(std::forward<::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*>(value));
}
template<typename TResult,typename TCapture>
inline ::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>* GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::getStaticF_s_delegate()  {
return ::cordl_internals::getStaticField<::System::Action_2<TResult,::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>*, "s_delegate", ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>();
}
template<typename TResult,typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::_ctor(::System::Action_2<TCapture,TResult>*  callback, TCapture  capture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_2<TCapture,TResult>*>(), ::i2c::type_of<TCapture>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, capture);
}
template<typename TResult,typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::Invoke(TResult  result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>  invertedCapture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>(),
                        {"Invoke", {}, {::i2c::type_of<TResult>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, invertedCapture);
}
template<typename TResult,typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult>  task, ::System::Action_2<TCapture,TResult>*  onCompleted, TCapture  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>>(),
                        {"ContinueTaskWith", {}, {::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>(), ::i2c::type_of<::System::Action_2<TCapture,TResult>*>(), ::i2c::type_of<TCapture>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task, onCompleted, state);
}
// Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TResult,typename TCapture>
constexpr ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::OVRSpatialAnchor_InvertedCapture_2(TCapture  _capture, ::System::Action_2<TCapture,TResult>*  _callback) noexcept  {
this->_capture = _capture;
this->_callback = _callback;
}
// Ctor Parameters []
template<typename TResult,typename TCapture>
constexpr ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult,TCapture>::OVRSpatialAnchor_InvertedCapture_2()   {
}
