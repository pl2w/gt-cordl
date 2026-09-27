#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialUVOffsetListSetter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialUVOffsetListSetter_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialUVOffsetListSetter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialUVOffsetListSetter::*)()>(&::GlobalNamespace::MaterialUVOffsetListSetter::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b0886c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialUVOffsetListSetter.SetUVOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialUVOffsetListSetter::*)(int32_t)>(&::GlobalNamespace::MaterialUVOffsetListSetter::SetUVOffset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b08920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"SetUVOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialUVOffsetListSetter.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MaterialUVOffsetListSetter::*)()>(&::GlobalNamespace::MaterialUVOffsetListSetter::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b08b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialUVOffsetListSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialUVOffsetListSetter::*)()>(&::GlobalNamespace::MaterialUVOffsetListSetter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b08ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_uvOffsetList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvOffsetList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_uvOffsetList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uvOffsetList;
}
constexpr void GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_set_uvOffsetList(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uvOffsetList = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_matPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_get_matPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matPropertyBlock;
}
constexpr void GlobalNamespace::MaterialUVOffsetListSetter::__cordl_internal_set_matPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matPropertyBlock = value;
}
inline void GlobalNamespace::MaterialUVOffsetListSetter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialUVOffsetListSetter::SetUVOffset(int32_t  listIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"SetUVOffset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listIndex);
}
inline bool GlobalNamespace::MaterialUVOffsetListSetter::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialUVOffsetListSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialUVOffsetListSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialUVOffsetListSetter* GlobalNamespace::MaterialUVOffsetListSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialUVOffsetListSetter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::MaterialUVOffsetListSetter::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::MaterialUVOffsetListSetter::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialUVOffsetListSetter::MaterialUVOffsetListSetter()   {
}
