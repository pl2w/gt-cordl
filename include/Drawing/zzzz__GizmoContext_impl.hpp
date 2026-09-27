#pragma once
// IWYU pragma private; include "Drawing/GizmoContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Drawing/zzzz__GizmoContext_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Drawing::GizmoContext.get_selectionSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Drawing::GizmoContext::get_selectionSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55d24f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"get_selectionSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.set_selectionSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Drawing::GizmoContext::set_selectionSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x55d254c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"set_selectionSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::GizmoContext::SetDirty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x55d25a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"SetDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::GizmoContext::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55d2548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.InSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*)>(&::Drawing::GizmoContext::InSelection)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x55d2604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InSelection", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.InSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*)>(&::Drawing::GizmoContext::InSelection)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x55d2674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InSelection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.InActiveSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*)>(&::Drawing::GizmoContext::InActiveSelection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55d27bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InActiveSelection", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GizmoContext.InActiveSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*)>(&::Drawing::GizmoContext::InActiveSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d2824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InActiveSelection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::GizmoContext::setStaticF_selectedTransforms(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*, "selectedTransforms", ::Drawing::GizmoContext*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* Drawing::GizmoContext::getStaticF_selectedTransforms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*, "selectedTransforms", ::Drawing::GizmoContext*>();
}
inline void Drawing::GizmoContext::setStaticF_drawingGizmos(bool  value)  {
::cordl_internals::setStaticField<bool, "drawingGizmos", ::Drawing::GizmoContext*>(std::forward<bool>(value));
}
inline bool Drawing::GizmoContext::getStaticF_drawingGizmos()  {
return ::cordl_internals::getStaticField<bool, "drawingGizmos", ::Drawing::GizmoContext*>();
}
inline void Drawing::GizmoContext::setStaticF_dirty(bool  value)  {
::cordl_internals::setStaticField<bool, "dirty", ::Drawing::GizmoContext*>(std::forward<bool>(value));
}
inline bool Drawing::GizmoContext::getStaticF_dirty()  {
return ::cordl_internals::getStaticField<bool, "dirty", ::Drawing::GizmoContext*>();
}
inline void Drawing::GizmoContext::setStaticF_selectionSizeInternal(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "selectionSizeInternal", ::Drawing::GizmoContext*>(std::forward<int32_t>(value));
}
inline int32_t Drawing::GizmoContext::getStaticF_selectionSizeInternal()  {
return ::cordl_internals::getStaticField<int32_t, "selectionSizeInternal", ::Drawing::GizmoContext*>();
}
inline int32_t Drawing::GizmoContext::get_selectionSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"get_selectionSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Drawing::GizmoContext::set_selectionSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"set_selectionSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Drawing::GizmoContext::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"SetDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::GizmoContext::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Drawing::GizmoContext::InSelection(::UnityEngine::Component*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InSelection", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Drawing::GizmoContext::InSelection(::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InSelection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tr);
}
inline bool Drawing::GizmoContext::InActiveSelection(::UnityEngine::Component*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InActiveSelection", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool Drawing::GizmoContext::InActiveSelection(::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GizmoContext*>(),
                        {"InActiveSelection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tr);
}
// Ctor Parameters []
constexpr ::Drawing::GizmoContext::GizmoContext()   {
}
