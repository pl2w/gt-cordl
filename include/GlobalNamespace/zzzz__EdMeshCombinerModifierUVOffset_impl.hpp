#pragma once
// IWYU pragma private; include "GlobalNamespace/EdMeshCombinerModifierUVOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__EdMeshCombinerModifierUVOffset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EdMeshCombinerModifierUVOffset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdMeshCombinerModifierUVOffset::*)()>(&::GlobalNamespace::EdMeshCombinerModifierUVOffset::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5802e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdMeshCombinerModifierUVOffset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_get_minUvOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minUvOffset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_get_minUvOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minUvOffset;
}
constexpr void GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_set_minUvOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minUvOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_get_maxUvOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUvOffset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_get_maxUvOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUvOffset;
}
constexpr void GlobalNamespace::EdMeshCombinerModifierUVOffset::__cordl_internal_set_maxUvOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxUvOffset = value;
}
inline void GlobalNamespace::EdMeshCombinerModifierUVOffset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdMeshCombinerModifierUVOffset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EdMeshCombinerModifierUVOffset* GlobalNamespace::EdMeshCombinerModifierUVOffset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EdMeshCombinerModifierUVOffset*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdMeshCombinerModifierUVOffset::EdMeshCombinerModifierUVOffset()   {
}
