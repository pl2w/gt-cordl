#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityDebugComponent.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameEntityDebugComponent.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityDebugComponent::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::IGameEntityDebugComponent::GetDebugTextLines)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityDebugComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityDebugComponent*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameEntityDebugComponent::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityDebugComponent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
