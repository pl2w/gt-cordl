#pragma once
// IWYU pragma private; include "Fusion/INetworkDictionary.hpp"
#include "Fusion/zzzz__INetworkDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkDictionary.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkDictionary::*)(::System::Object*)>(&::Fusion::INetworkDictionary::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkDictionary*>(),
                    {::i2c::class_of<::Fusion::INetworkDictionary*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::INetworkDictionary::Add(::System::Object*  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkDictionary*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::INetworkDictionary::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::INetworkDictionary::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
