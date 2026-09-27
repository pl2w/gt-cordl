#pragma once
// IWYU pragma private; include "Liv/Lck/Rendering/LckOrientedCompositionLayer.hpp"
#include "Liv/Lck/Rendering/zzzz__LckCompositionLayer_impl.hpp"
#include "Liv/Lck/Rendering/zzzz__LckOrientedCompositionLayer_def.hpp"
#include "Liv/Lck/Rendering/zzzz__ILckOrientationAwareLayer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Rendering::LckOrientedCompositionLayer.SetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckOrientedCompositionLayer::*)(bool)>(&::Liv::Lck::Rendering::LckOrientedCompositionLayer::SetOrientation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d41158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(),
                        {"SetOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckOrientedCompositionLayer.get_CurrentTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::Liv::Lck::Rendering::LckOrientedCompositionLayer::*)()>(&::Liv::Lck::Rendering::LckOrientedCompositionLayer::get_CurrentTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d411dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(),
                    {::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Rendering::LckOrientedCompositionLayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Rendering::LckOrientedCompositionLayer::*)()>(&::Liv::Lck::Rendering::LckOrientedCompositionLayer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d411f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture>& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get_HorizontalTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get_HorizontalTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalTexture;
}
constexpr void Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_set_HorizontalTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get_VerticalTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get_VerticalTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalTexture;
}
constexpr void Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_set_VerticalTexture(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalTexture = value;
}
constexpr bool& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get__isHorizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHorizontal;
}
constexpr bool const& Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_get__isHorizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHorizontal;
}
constexpr void Liv::Lck::Rendering::LckOrientedCompositionLayer::__cordl_internal_set__isHorizontal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHorizontal = value;
}
inline void Liv::Lck::Rendering::LckOrientedCompositionLayer::SetOrientation(bool  isHorizontal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(),
                        {"SetOrientation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHorizontal);
}
inline ::UnityW<::UnityEngine::Texture> Liv::Lck::Rendering::LckOrientedCompositionLayer::get_CurrentTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void Liv::Lck::Rendering::LckOrientedCompositionLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Rendering::LckOrientedCompositionLayer* Liv::Lck::Rendering::LckOrientedCompositionLayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Rendering::LckOrientedCompositionLayer*>());
}
/// @brief Convert operator to "::Liv::Lck::Rendering::ILckOrientationAwareLayer"
constexpr  Liv::Lck::Rendering::LckOrientedCompositionLayer::operator ::Liv::Lck::Rendering::ILckOrientationAwareLayer*() noexcept {
return static_cast<::Liv::Lck::Rendering::ILckOrientationAwareLayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Rendering::ILckOrientationAwareLayer"
constexpr ::Liv::Lck::Rendering::ILckOrientationAwareLayer* Liv::Lck::Rendering::LckOrientedCompositionLayer::i___Liv__Lck__Rendering__ILckOrientationAwareLayer() noexcept {
return static_cast<::Liv::Lck::Rendering::ILckOrientationAwareLayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Rendering::LckOrientedCompositionLayer::LckOrientedCompositionLayer()   {
}
