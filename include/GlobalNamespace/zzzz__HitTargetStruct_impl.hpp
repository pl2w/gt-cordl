#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetStruct.hpp"
#include "GlobalNamespace/zzzz__HitTargetStruct_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HitTargetStruct._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HitTargetStruct::*)(int32_t)>(&::GlobalNamespace::HitTargetStruct::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56e7738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetStruct>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HitTargetStruct::__cordl_internal_get_Score()  {
return this->___Score;
}
constexpr int32_t const& GlobalNamespace::HitTargetStruct::__cordl_internal_get_Score() const {
return this->___Score;
}
constexpr void GlobalNamespace::HitTargetStruct::__cordl_internal_set_Score(int32_t  value)  {
this->___Score = value;
}
inline void GlobalNamespace::HitTargetStruct::_ctor(int32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HitTargetStruct>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::HitTargetStruct::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::HitTargetStruct::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Score", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HitTargetStruct::HitTargetStruct(int32_t  Score) noexcept  {
this->Score = Score;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HitTargetStruct::HitTargetStruct()   {
}
