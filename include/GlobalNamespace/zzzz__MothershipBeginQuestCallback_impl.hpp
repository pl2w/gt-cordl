#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipBeginQuestCallback.hpp"
#include "GlobalNamespace/zzzz__QuestBeginLoginV2RequestCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipBeginQuestCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipBeginQuestCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipBeginQuestCallback::*)()>(&::GlobalNamespace::MothershipBeginQuestCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53b90d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipBeginQuestCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipBeginQuestCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipBeginQuestCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipBeginQuestCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53b9138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipBeginQuestCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipBeginQuestCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipBeginQuestCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipBeginQuestCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipBeginQuestCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipBeginQuestCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipBeginQuestCallback* GlobalNamespace::MothershipBeginQuestCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipBeginQuestCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipBeginQuestCallback::MothershipBeginQuestCallback()   {
}
