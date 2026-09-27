#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/IKeyGenerator.hpp"
#include "UnityEngine/Localization/Tables/zzzz__IKeyGenerator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::IKeyGenerator.GetNextKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::IKeyGenerator::*)()>(&::UnityEngine::Localization::Tables::IKeyGenerator::GetNextKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::IKeyGenerator*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::IKeyGenerator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::Localization::Tables::IKeyGenerator::GetNextKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::IKeyGenerator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
