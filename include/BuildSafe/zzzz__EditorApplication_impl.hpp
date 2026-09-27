#pragma once
// IWYU pragma private; include "BuildSafe/EditorApplication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__EditorApplication_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::BuildSafe::EditorApplication.add_hierarchyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::add_hierarchyChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_hierarchyChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::EditorApplication.remove_hierarchyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::remove_hierarchyChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_hierarchyChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::EditorApplication.add_update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::add_update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_update", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::EditorApplication.remove_update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::remove_update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_update", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::EditorApplication.add_delayCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::add_delayCall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_delayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::EditorApplication.remove_delayCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::BuildSafe::EditorApplication::remove_delayCall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4ec84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_delayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void BuildSafe::EditorApplication::add_hierarchyChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_hierarchyChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::EditorApplication::remove_hierarchyChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_hierarchyChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::EditorApplication::add_update(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_update", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::EditorApplication::remove_update(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_update", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::EditorApplication::add_delayCall(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"add_delayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void BuildSafe::EditorApplication::remove_delayCall(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::EditorApplication*>(),
                        {"remove_delayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::BuildSafe::EditorApplication::EditorApplication()   {
}
