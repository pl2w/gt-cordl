#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapManager__Activate_d__102.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_impl.hpp"
#include "Modio/Mods/zzzz__ModId_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapManager__Activate_d__102_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapManager__Activate_d__102.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapManager__Activate_d__102::*)()>(&::GlobalNamespace::CustomMapManager__Activate_d__102::MoveNext)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x5be9280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapManager__Activate_d__102>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapManager__Activate_d__102.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapManager__Activate_d__102::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CustomMapManager__Activate_d__102::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5be99d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapManager__Activate_d__102>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomMapManager__Activate_d__102::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapManager__Activate_d__102>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CustomMapManager__Activate_d__102::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapManager__Activate_d__102>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::CustomMapManager__Activate_d__102::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::CustomMapManager__Activate_d__102::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mode", ty: "::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasEntryTeleportNode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_autoLoadModId_5__2", ty: "::Modio::Mods::ModId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_index_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CustomMapManager__Activate_d__102::CustomMapManager__Activate_d__102(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode, bool  hasEntryTeleportNode, ::Modio::Mods::ModId  _autoLoadModId_5__2, int32_t  _index_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->mode = mode;
this->hasEntryTeleportNode = hasEntryTeleportNode;
this->_autoLoadModId_5__2 = _autoLoadModId_5__2;
this->_index_5__3 = _index_5__3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapManager__Activate_d__102::CustomMapManager__Activate_d__102()   {
}
