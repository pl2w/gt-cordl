#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListLayout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ListLayout_def.hpp"
#include "Oculus/Interaction/zzzz__ListLayout_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListLayout::*)()>(&::Oculus::Interaction::ListLayout::get_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)()>(&::Oculus::Interaction::ListLayout::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa45fa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.AddElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(int32_t, float_t, float_t)>(&::Oculus::Interaction::ListLayout::AddElement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa45fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"AddElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.RemoveElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(int32_t)>(&::Oculus::Interaction::ListLayout::RemoveElement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa460098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"RemoveElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.UpdatePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout_ListElement*, float_t, bool)>(&::Oculus::Interaction::ListLayout::UpdatePos)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa460028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePos", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.UpdatePositionsFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)()>(&::Oculus::Interaction::ListLayout::UpdatePositionsFromRoot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa45fecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePositionsFromRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.UpdatePositionsRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout_ListElement*)>(&::Oculus::Interaction::ListLayout::UpdatePositionsRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4601d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePositionsRight", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.SwapWithNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout_ListElement*)>(&::Oculus::Interaction::ListLayout::SwapWithNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa460228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"SwapWithNext", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.SwapWithPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout_ListElement*)>(&::Oculus::Interaction::ListLayout::SwapWithPrev)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa460368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"SwapWithPrev", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.MoveElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(int32_t, float_t)>(&::Oculus::Interaction::ListLayout::MoveElement)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa45ff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"MoveElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.UpdateElementSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout::*)(int32_t, float_t)>(&::Oculus::Interaction::ListLayout::UpdateElementSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa46037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdateElementSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.GetElementPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListLayout::*)(int32_t)>(&::Oculus::Interaction::ListLayout::GetElementPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa460430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetElementPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.GetElementSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListLayout::*)(int32_t)>(&::Oculus::Interaction::ListLayout::GetElementSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4604b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetElementSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout.GetTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListLayout::*)(int32_t, float_t, float_t)>(&::Oculus::Interaction::ListLayout::GetTargetPosition)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa460534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetTargetPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::ListLayout_ListElement*& Oculus::Interaction::ListLayout::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::Oculus::Interaction::ListLayout_ListElement* const& Oculus::Interaction::ListLayout::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set__root(::Oculus::Interaction::ListLayout_ListElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*& Oculus::Interaction::ListLayout::__cordl_internal_get__elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>* const& Oculus::Interaction::ListLayout::__cordl_internal_get__elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set__elements(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elements = value;
}
constexpr ::System::Action_1<int32_t>*& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementAdded;
}
constexpr ::System::Action_1<int32_t>* const& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementAdded;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set_WhenElementAdded(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenElementAdded = value;
}
constexpr ::System::Action_2<int32_t,bool>*& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementUpdated;
}
constexpr ::System::Action_2<int32_t,bool>* const& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementUpdated;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set_WhenElementUpdated(::System::Action_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenElementUpdated = value;
}
constexpr ::System::Action_1<int32_t>*& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementRemoved;
}
constexpr ::System::Action_1<int32_t>* const& Oculus::Interaction::ListLayout::__cordl_internal_get_WhenElementRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenElementRemoved;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set_WhenElementRemoved(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenElementRemoved = value;
}
constexpr bool& Oculus::Interaction::ListLayout::__cordl_internal_get__sizeUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeUpdate;
}
constexpr bool const& Oculus::Interaction::ListLayout::__cordl_internal_get__sizeUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sizeUpdate;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set__sizeUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sizeUpdate = value;
}
constexpr int32_t& Oculus::Interaction::ListLayout::__cordl_internal_get__moveElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveElement;
}
constexpr int32_t const& Oculus::Interaction::ListLayout::__cordl_internal_get__moveElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveElement;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set__moveElement(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveElement = value;
}
constexpr float_t& Oculus::Interaction::ListLayout::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr float_t const& Oculus::Interaction::ListLayout::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void Oculus::Interaction::ListLayout::__cordl_internal_set__size(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
inline float_t Oculus::Interaction::ListLayout::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ListLayout::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ListLayout::AddElement(int32_t  id, float_t  size, float_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"AddElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, size, target);
}
inline void Oculus::Interaction::ListLayout::RemoveElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"RemoveElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ListLayout::UpdatePos(::Oculus::Interaction::ListLayout_ListElement*  element, float_t  pos, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePos", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, pos, force);
}
inline void Oculus::Interaction::ListLayout::UpdatePositionsFromRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePositionsFromRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ListLayout::UpdatePositionsRight(::Oculus::Interaction::ListLayout_ListElement*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdatePositionsRight", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, current);
}
inline void Oculus::Interaction::ListLayout::SwapWithNext(::Oculus::Interaction::ListLayout_ListElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"SwapWithNext", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Oculus::Interaction::ListLayout::SwapWithPrev(::Oculus::Interaction::ListLayout_ListElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"SwapWithPrev", {}, {::i2c::type_of<::Oculus::Interaction::ListLayout_ListElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Oculus::Interaction::ListLayout::MoveElement(int32_t  id, float_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"MoveElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, target);
}
inline void Oculus::Interaction::ListLayout::UpdateElementSize(int32_t  id, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"UpdateElementSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, size);
}
inline float_t Oculus::Interaction::ListLayout::GetElementPosition(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetElementPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline float_t Oculus::Interaction::ListLayout::GetElementSize(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetElementSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline float_t Oculus::Interaction::ListLayout::GetTargetPosition(int32_t  id, float_t  target, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout*>(),
                        {"GetTargetPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id, target, size);
}
inline ::Oculus::Interaction::ListLayout* Oculus::Interaction::ListLayout::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListLayout*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListLayout::ListLayout()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ListLayout___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout___c::*)()>(&::Oculus::Interaction::ListLayout___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa460670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout___c.__ctor_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout___c::*)(int32_t)>(&::Oculus::Interaction::ListLayout___c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa460678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout___c.__ctor_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout___c::*)(int32_t, bool)>(&::Oculus::Interaction::ListLayout___c::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46067c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListLayout___c.__ctor_b__11_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout___c::*)(int32_t)>(&::Oculus::Interaction::ListLayout___c::__ctor_b__11_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa460680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ListLayout___c::setStaticF___9(::Oculus::Interaction::ListLayout___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::ListLayout___c*, "<>9", ::Oculus::Interaction::ListLayout___c*>(std::forward<::Oculus::Interaction::ListLayout___c*>(value));
}
inline ::Oculus::Interaction::ListLayout___c* Oculus::Interaction::ListLayout___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::ListLayout___c*, "<>9", ::Oculus::Interaction::ListLayout___c*>();
}
inline void Oculus::Interaction::ListLayout___c::setStaticF___9__11_0(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__11_0", ::Oculus::Interaction::ListLayout___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Oculus::Interaction::ListLayout___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__11_0", ::Oculus::Interaction::ListLayout___c*>();
}
inline void Oculus::Interaction::ListLayout___c::setStaticF___9__11_1(::System::Action_2<int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<int32_t,bool>*, "<>9__11_1", ::Oculus::Interaction::ListLayout___c*>(std::forward<::System::Action_2<int32_t,bool>*>(value));
}
inline ::System::Action_2<int32_t,bool>* Oculus::Interaction::ListLayout___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<int32_t,bool>*, "<>9__11_1", ::Oculus::Interaction::ListLayout___c*>();
}
inline void Oculus::Interaction::ListLayout___c::setStaticF___9__11_2(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "<>9__11_2", ::Oculus::Interaction::ListLayout___c*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* Oculus::Interaction::ListLayout___c::getStaticF___9__11_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "<>9__11_2", ::Oculus::Interaction::ListLayout___c*>();
}
inline void Oculus::Interaction::ListLayout___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ListLayout___c::__ctor_b__11_0(int32_t  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::ListLayout___c::__ctor_b__11_1(int32_t  _p0_, bool  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline void Oculus::Interaction::ListLayout___c::__ctor_b__11_2(int32_t  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout___c*>(),
                        {"<.ctor>b__11_2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::ListLayout___c* Oculus::Interaction::ListLayout___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListLayout___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListLayout___c::ListLayout___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::ListLayout_ListElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListLayout_ListElement::*)(int32_t, float_t)>(&::Oculus::Interaction::ListLayout_ListElement::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa45fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout_ListElement*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Oculus::Interaction::ListLayout_ListElement::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr float_t& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr float_t const& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void Oculus::Interaction::ListLayout_ListElement::__cordl_internal_set_pos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr float_t& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_halfSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halfSize;
}
constexpr float_t const& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_halfSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___halfSize;
}
constexpr void Oculus::Interaction::ListLayout_ListElement::__cordl_internal_set_halfSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___halfSize = value;
}
constexpr ::Oculus::Interaction::ListLayout_ListElement*& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Oculus::Interaction::ListLayout_ListElement* const& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Oculus::Interaction::ListLayout_ListElement::__cordl_internal_set_prev(::Oculus::Interaction::ListLayout_ListElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::Oculus::Interaction::ListLayout_ListElement*& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Oculus::Interaction::ListLayout_ListElement* const& Oculus::Interaction::ListLayout_ListElement::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Oculus::Interaction::ListLayout_ListElement::__cordl_internal_set_next(::Oculus::Interaction::ListLayout_ListElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
inline void Oculus::Interaction::ListLayout_ListElement::_ctor(int32_t  id, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListLayout_ListElement*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, size);
}
inline ::Oculus::Interaction::ListLayout_ListElement* Oculus::Interaction::ListLayout_ListElement::New_ctor(int32_t  id, float_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListLayout_ListElement*>(id, size));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListLayout_ListElement::ListLayout_ListElement()   {
}
