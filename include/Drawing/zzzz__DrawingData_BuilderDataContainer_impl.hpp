#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderDataContainer.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderDataContainer_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.get_memoryUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DrawingData_BuilderDataContainer::*)()>(&::GlobalNamespace::DrawingData_BuilderDataContainer::get_memoryUsage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55ccd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"get_memoryUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.Reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta (::GlobalNamespace::DrawingData_BuilderDataContainer::*)(bool)>(&::GlobalNamespace::DrawingData_BuilderDataContainer::Reserve)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55d1f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Reserve", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderDataContainer::*)(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta)>(&::GlobalNamespace::DrawingData_BuilderDataContainer::Release)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55d20ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Release", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.StillExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DrawingData_BuilderDataContainer::*)(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta)>(&::GlobalNamespace::DrawingData_BuilderDataContainer::StillExists)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55d2130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"StillExists", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::DrawingData_BuilderData> (::GlobalNamespace::DrawingData_BuilderDataContainer::*)(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta)>(&::GlobalNamespace::DrawingData_BuilderDataContainer::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x55d2168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.DisposeCommandBuildersWithJobDependencies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderDataContainer::*)(::Drawing::DrawingData*)>(&::GlobalNamespace::DrawingData_BuilderDataContainer::DisposeCommandBuildersWithJobDependencies)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55cca14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"DisposeCommandBuildersWithJobDependencies", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.ReleaseAllUnused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderDataContainer::*)()>(&::GlobalNamespace::DrawingData_BuilderDataContainer::ReleaseAllUnused)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55ccc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"ReleaseAllUnused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawingData_BuilderDataContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DrawingData_BuilderDataContainer::*)()>(&::GlobalNamespace::DrawingData_BuilderDataContainer::Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55ce584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::DrawingData_BuilderDataContainer::get_memoryUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"get_memoryUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta GlobalNamespace::DrawingData_BuilderDataContainer::Reserve(bool  isBuiltInCommandBuilder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Reserve", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>(*this, ___internal_method, isBuiltInCommandBuilder);
}
inline void GlobalNamespace::DrawingData_BuilderDataContainer::Release(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Release", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meta);
}
inline bool GlobalNamespace::DrawingData_BuilderDataContainer::StillExists(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"StillExists", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, meta);
}
inline ::by_ref<::GlobalNamespace::DrawingData_BuilderData> GlobalNamespace::DrawingData_BuilderDataContainer::Get(::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::DrawingData_BuilderData>>(*this, ___internal_method, meta);
}
inline void GlobalNamespace::DrawingData_BuilderDataContainer::DisposeCommandBuildersWithJobDependencies(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"DisposeCommandBuildersWithJobDependencies", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void GlobalNamespace::DrawingData_BuilderDataContainer::ReleaseAllUnused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"ReleaseAllUnused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DrawingData_BuilderDataContainer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DrawingData_BuilderDataContainer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DrawingData_BuilderDataContainer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DrawingData_BuilderDataContainer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<::GlobalNamespace::DrawingData_BuilderData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer::DrawingData_BuilderDataContainer(::ArrayW<::GlobalNamespace::DrawingData_BuilderData>  data) noexcept  {
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer::DrawingData_BuilderDataContainer()   {
}
