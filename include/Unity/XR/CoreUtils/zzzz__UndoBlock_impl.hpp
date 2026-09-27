#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/UndoBlock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__UndoBlock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)(::StringW, bool)>(&::Unity::XR::CoreUtils::UndoBlock::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb3fab38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock.RegisterCreatedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)(::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::UndoBlock::RegisterCreatedObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fab58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"RegisterCreatedObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock.RecordObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)(::UnityEngine::Object*)>(&::Unity::XR::CoreUtils::UndoBlock::RecordObject)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fab5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"RecordObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock.SetTransformParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::UndoBlock::SetTransformParent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb3fab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"SetTransformParent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)(bool)>(&::Unity::XR::CoreUtils::UndoBlock::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fab7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::UndoBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::UndoBlock::*)()>(&::Unity::XR::CoreUtils::UndoBlock::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb3fab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::XR::CoreUtils::UndoBlock::__cordl_internal_get_m_UndoGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UndoGroup;
}
constexpr int32_t const& Unity::XR::CoreUtils::UndoBlock::__cordl_internal_get_m_UndoGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UndoGroup;
}
constexpr void Unity::XR::CoreUtils::UndoBlock::__cordl_internal_set_m_UndoGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UndoGroup = value;
}
constexpr bool& Unity::XR::CoreUtils::UndoBlock::__cordl_internal_get_m_DisposedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisposedValue;
}
constexpr bool const& Unity::XR::CoreUtils::UndoBlock::__cordl_internal_get_m_DisposedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisposedValue;
}
constexpr void Unity::XR::CoreUtils::UndoBlock::__cordl_internal_set_m_DisposedValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisposedValue = value;
}
inline void Unity::XR::CoreUtils::UndoBlock::_ctor(::StringW  undoLabel, bool  testMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, undoLabel, testMode);
}
inline void Unity::XR::CoreUtils::UndoBlock::RegisterCreatedObject(::UnityEngine::Object*  objectToUndo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"RegisterCreatedObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectToUndo);
}
inline void Unity::XR::CoreUtils::UndoBlock::RecordObject(::UnityEngine::Object*  objectToUndo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"RecordObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectToUndo);
}
inline void Unity::XR::CoreUtils::UndoBlock::SetTransformParent(::UnityEngine::Transform*  transform, ::UnityEngine::Transform*  newParent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"SetTransformParent", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, newParent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Unity::XR::CoreUtils::UndoBlock::AddComponent(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                    {"AddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, gameObject);
}
inline void Unity::XR::CoreUtils::UndoBlock::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Unity::XR::CoreUtils::UndoBlock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::UndoBlock*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::UndoBlock* Unity::XR::CoreUtils::UndoBlock::New_ctor(::StringW  undoLabel, bool  testMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::UndoBlock*>(undoLabel, testMode));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::XR::CoreUtils::UndoBlock::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::XR::CoreUtils::UndoBlock::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::UndoBlock::UndoBlock()   {
}
