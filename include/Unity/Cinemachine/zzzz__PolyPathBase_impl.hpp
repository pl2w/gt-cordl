#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathEnum_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathEnum* (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaefb134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaefb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.get_IsHole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::get_IsHole)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaefb1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"get_IsHole", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathBase::*)(::Unity::Cinemachine::PolyPathBase*)>(&::Unity::Cinemachine::PolyPathBase::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaefb21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.GetIsHole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::GetIsHole)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaefb200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"GetIsHole", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaefb2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.AddChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathBase* (::Unity::Cinemachine::PolyPathBase::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::PolyPathBase::AddChild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathBase.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathBase::*)()>(&::Unity::Cinemachine::PolyPathBase::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaefa3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::PolyPathBase*& Unity::Cinemachine::PolyPathBase::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::Unity::Cinemachine::PolyPathBase* const& Unity::Cinemachine::PolyPathBase::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void Unity::Cinemachine::PolyPathBase::__cordl_internal_set__parent(::Unity::Cinemachine::PolyPathBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*& Unity::Cinemachine::PolyPathBase::__cordl_internal_get__childs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____childs;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>* const& Unity::Cinemachine::PolyPathBase::__cordl_internal_get__childs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____childs;
}
constexpr void Unity::Cinemachine::PolyPathBase::__cordl_internal_set__childs(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____childs = value;
}
inline ::Unity::Cinemachine::PolyPathEnum* Unity::Cinemachine::PolyPathBase::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathEnum*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Unity::Cinemachine::PolyPathBase::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool Unity::Cinemachine::PolyPathBase::get_IsHole()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"get_IsHole", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyPathBase::_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline bool Unity::Cinemachine::PolyPathBase::GetIsHole()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"GetIsHole", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::PolyPathBase::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyPathBase* Unity::Cinemachine::PolyPathBase::AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathBase*>(this, ___internal_method, p);
}
inline void Unity::Cinemachine::PolyPathBase::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathBase*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [NullableContext(2)]
inline ::Unity::Cinemachine::PolyPathBase* Unity::Cinemachine::PolyPathBase::New_ctor(::Unity::Cinemachine::PolyPathBase*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyPathBase*>(parent));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Unity::Cinemachine::PolyPathBase::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Unity::Cinemachine::PolyPathBase::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyPathBase::PolyPathBase()   {
}
