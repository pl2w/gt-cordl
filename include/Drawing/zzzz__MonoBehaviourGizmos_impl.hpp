#pragma once
// IWYU pragma private; include "Drawing/MonoBehaviourGizmos.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Drawing/zzzz__MonoBehaviourGizmos_def.hpp"
#include "Drawing/zzzz__IDrawGizmos_def.hpp"
//  Writing Method size for method: ::Drawing::MonoBehaviourGizmos._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::MonoBehaviourGizmos::*)()>(&::Drawing::MonoBehaviourGizmos::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55da554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::MonoBehaviourGizmos.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::MonoBehaviourGizmos::*)()>(&::Drawing::MonoBehaviourGizmos::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55da55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::MonoBehaviourGizmos.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::MonoBehaviourGizmos::*)()>(&::Drawing::MonoBehaviourGizmos::DrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55da560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(),
                    {::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Drawing::MonoBehaviourGizmos::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::MonoBehaviourGizmos::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::MonoBehaviourGizmos::DrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::MonoBehaviourGizmos*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::MonoBehaviourGizmos* Drawing::MonoBehaviourGizmos::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::MonoBehaviourGizmos*>());
}
/// @brief Convert operator to "::Drawing::IDrawGizmos"
constexpr  Drawing::MonoBehaviourGizmos::operator ::Drawing::IDrawGizmos*() noexcept {
return static_cast<::Drawing::IDrawGizmos*>(static_cast<void*>(this));
}
/// @brief Convert to "::Drawing::IDrawGizmos"
constexpr ::Drawing::IDrawGizmos* Drawing::MonoBehaviourGizmos::i___Drawing__IDrawGizmos() noexcept {
return static_cast<::Drawing::IDrawGizmos*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Drawing::MonoBehaviourGizmos::MonoBehaviourGizmos()   {
}
