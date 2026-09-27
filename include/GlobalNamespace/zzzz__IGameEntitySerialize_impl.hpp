#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntitySerialize.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameEntitySerialize.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntitySerialize::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::IGameEntitySerialize::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntitySerialize.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntitySerialize::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::IGameEntitySerialize::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameEntitySerialize::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::IGameEntitySerialize::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntitySerialize*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
