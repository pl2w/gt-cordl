#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlaySystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlaySystem_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlaySystem.AddCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::OnEnterPlaySystem::AddCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b0e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlaySystem*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnEnterPlaySystem::AddCallback(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlaySystem*>(),
                        {"AddCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnEnterPlaySystem::OnEnterPlaySystem()   {
}
