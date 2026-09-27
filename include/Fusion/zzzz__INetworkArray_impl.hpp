#pragma once
// IWYU pragma private; include "Fusion/INetworkArray.hpp"
#include "Fusion/zzzz__INetworkArray_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::INetworkArray::*)(int32_t)>(&::Fusion::INetworkArray::get_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkArray*>(),
                    {::i2c::class_of<::Fusion::INetworkArray*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkArray.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkArray::*)(int32_t, ::System::Object*)>(&::Fusion::INetworkArray::set_Item)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkArray*>(),
                    {::i2c::class_of<::Fusion::INetworkArray*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* Fusion::INetworkArray::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkArray*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Fusion::INetworkArray::set_Item(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkArray*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::INetworkArray::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::INetworkArray::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
