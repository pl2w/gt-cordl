#pragma once
// IWYU pragma private; include "Fusion/BehaviourUtils_DeferredJoin.hpp"
#include "Fusion/zzzz__BehaviourUtils_DeferredJoin_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BehaviourUtils_DeferredJoin.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BehaviourUtils_DeferredJoin::*)()>(&::GlobalNamespace::BehaviourUtils_DeferredJoin::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f976bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BehaviourUtils_DeferredJoin>(),
                    {::i2c::class_of<::GlobalNamespace::BehaviourUtils_DeferredJoin>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BehaviourUtils_DeferredJoin::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BehaviourUtils_DeferredJoin>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::IEnumerable*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BehaviourUtils_DeferredJoin::BehaviourUtils_DeferredJoin(::System::Collections::IEnumerable*  _enumerable) noexcept  {
this->_enumerable = _enumerable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BehaviourUtils_DeferredJoin::BehaviourUtils_DeferredJoin()   {
}
