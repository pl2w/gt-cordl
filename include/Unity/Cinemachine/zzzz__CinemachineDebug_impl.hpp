#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDebug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDebug_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDebug.SBFromPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::Unity::Cinemachine::CinemachineDebug::SBFromPool)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xaec2ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDebug*>(),
                        {"SBFromPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDebug.ReturnToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::Unity::Cinemachine::CinemachineDebug::ReturnToPool)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xaec2de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDebug*>(),
                        {"ReturnToPool", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineDebug::setStaticF_s_AvailableStringBuilders(::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*, "s_AvailableStringBuilders", ::Unity::Cinemachine::CinemachineDebug*>(std::forward<::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Text::StringBuilder*>* Unity::Cinemachine::CinemachineDebug::getStaticF_s_AvailableStringBuilders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Text::StringBuilder*>*, "s_AvailableStringBuilders", ::Unity::Cinemachine::CinemachineDebug*>();
}
inline void Unity::Cinemachine::CinemachineDebug::setStaticF_OnGUIHandlers(::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*, "OnGUIHandlers", ::Unity::Cinemachine::CinemachineDebug*>(std::forward<::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*>(value));
}
inline ::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>* Unity::Cinemachine::CinemachineDebug::getStaticF_OnGUIHandlers()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Unity::Cinemachine::CinemachineBrain>>*, "OnGUIHandlers", ::Unity::Cinemachine::CinemachineDebug*>();
}
inline void Unity::Cinemachine::CinemachineDebug::setStaticF_GameViewGuidesEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "GameViewGuidesEnabled", ::Unity::Cinemachine::CinemachineDebug*>(std::forward<bool>(value));
}
inline bool Unity::Cinemachine::CinemachineDebug::getStaticF_GameViewGuidesEnabled()  {
return ::cordl_internals::getStaticField<bool, "GameViewGuidesEnabled", ::Unity::Cinemachine::CinemachineDebug*>();
}
inline ::System::Text::StringBuilder* Unity::Cinemachine::CinemachineDebug::SBFromPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDebug*>(),
                        {"SBFromPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineDebug::ReturnToPool(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDebug*>(),
                        {"ReturnToPool", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDebug::CinemachineDebug()   {
}
