#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModGallery/ModioUIModGalleryPagination.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/ModGallery/zzzz__ModioUIModGalleryPagination_def.hpp"
#include "Modio/Unity/UI/Components/ModGallery/zzzz__ModioUIModGallery_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination.OnPointerClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::OnPointerClick)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fc9a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {"OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::*)(bool)>(&::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::SetState)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fc96f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::*)()>(&::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc9a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get_Gallery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gallery;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery> const& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get_Gallery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Gallery;
}
constexpr void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_set_Gallery(::UnityW<::Modio::Unity::UI::Components::ModGallery::ModioUIModGallery>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Gallery = value;
}
constexpr int32_t& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr int32_t const& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_set_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get__inactiveGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get__inactiveGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveGameObject;
}
constexpr void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_set__inactiveGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inactiveGameObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get__activeGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_get__activeGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeGameObject;
}
constexpr void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::__cordl_internal_set__activeGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeGameObject = value;
}
inline void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {"OnPointerClick", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::SetState(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination* Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModGallery::ModioUIModGalleryPagination::ModioUIModGalleryPagination()   {
}
