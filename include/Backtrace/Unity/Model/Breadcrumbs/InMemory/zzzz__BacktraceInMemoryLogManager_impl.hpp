#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/InMemory/BacktraceInMemoryLogManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/InMemory/zzzz__BacktraceInMemoryLogManager_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/InMemory/zzzz__InMemoryBreadcrumb_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceLogManager_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.get_MaximumNumberOfBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::get_MaximumNumberOfBreadcrumbs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"get_MaximumNumberOfBreadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.set_MaximumNumberOfBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)(int32_t)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::set_MaximumNumberOfBreadcrumbs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1fee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"set_MaximumNumberOfBreadcrumbs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f1fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.get_BreadcrumbsFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::get_BreadcrumbsFilePath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1ffc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"get_BreadcrumbsFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)(::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Add)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f1ffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f20484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Enable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f204dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Length)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f204e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager.BreadcrumbId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::BreadcrumbId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__MaximumNumberOfBreadcrumbs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumNumberOfBreadcrumbs_k__BackingField;
}
constexpr int32_t const& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__MaximumNumberOfBreadcrumbs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumNumberOfBreadcrumbs_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_set__MaximumNumberOfBreadcrumbs_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumNumberOfBreadcrumbs_k__BackingField = value;
}
constexpr ::System::Object*& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr ::System::Object* const& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_set__lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockObject = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get_Breadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Breadcrumbs;
}
constexpr ::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>* const& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get_Breadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Breadcrumbs;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_set_Breadcrumbs(::System::Collections::Generic::Queue_1<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Breadcrumbs = value;
}
constexpr double_t& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__breadcrumbId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbId;
}
constexpr double_t const& Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_get__breadcrumbId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbId;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::__cordl_internal_set__breadcrumbId(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbId = value;
}
inline int32_t Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::get_MaximumNumberOfBreadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"get_MaximumNumberOfBreadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::set_MaximumNumberOfBreadcrumbs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"set_MaximumNumberOfBreadcrumbs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::get_BreadcrumbsFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"get_BreadcrumbsFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Add(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  type, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  level, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, type, level, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::BreadcrumbId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager* Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr  Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::operator ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceLogManager() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::InMemory::BacktraceInMemoryLogManager::BacktraceInMemoryLogManager()   {
}
