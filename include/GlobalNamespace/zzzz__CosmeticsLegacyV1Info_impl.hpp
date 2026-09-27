#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsLegacyV1Info.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsLegacyV1Info_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsLegacyV1Info.TryGetPlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::CosmeticsLegacyV1Info::TryGetPlayFabId)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x565e684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetPlayFabId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsLegacyV1Info.TryGetPlayFabId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, bool)>(&::GlobalNamespace::CosmeticsLegacyV1Info::TryGetPlayFabId)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x565ea14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetPlayFabId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsLegacyV1Info.TryGetBodyDockAllObjectsIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<int32_t>>)>(&::GlobalNamespace::CosmeticsLegacyV1Info::TryGetBodyDockAllObjectsIndexes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x565eb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetBodyDockAllObjectsIndexes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF_k_special(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_special", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF_k_special()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_special", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF_k_packs(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_packs", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF_k_packs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_packs", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF_k_oldPacks(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_oldPacks", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF_k_oldPacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_oldPacks", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF_k_unused(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_unused", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF_k_unused()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_unused", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF_k_v1DisplayNames_to_playFabIds(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_v1DisplayNames_to_playFabIds", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF_k_v1DisplayNames_to_playFabIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "k_v1DisplayNames_to_playFabIds", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline void GlobalNamespace::CosmeticsLegacyV1Info::setStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*, "_k_playFabId_to_bodyDockPositions_allObjects_indexes", ::GlobalNamespace::CosmeticsLegacyV1Info*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>* GlobalNamespace::CosmeticsLegacyV1Info::getStaticF__k_playFabId_to_bodyDockPositions_allObjects_indexes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>>*, "_k_playFabId_to_bodyDockPositions_allObjects_indexes", ::GlobalNamespace::CosmeticsLegacyV1Info*>();
}
inline bool GlobalNamespace::CosmeticsLegacyV1Info::TryGetPlayFabId(::StringW  unityItemId, ::StringW  unityDisplayName, ::StringW  unityOverrideDisplayName, ::by_ref<::StringW>  playFabId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetPlayFabId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unityItemId, unityDisplayName, unityOverrideDisplayName, playFabId);
}
inline bool GlobalNamespace::CosmeticsLegacyV1Info::TryGetPlayFabId(::StringW  unityItemId, ::by_ref<::StringW>  playFabId, bool  logErrors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetPlayFabId", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, unityItemId, playFabId, logErrors);
}
inline bool GlobalNamespace::CosmeticsLegacyV1Info::TryGetBodyDockAllObjectsIndexes(::StringW  playFabId, ::by_ref<::ArrayW<int32_t>>  bdAllIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsLegacyV1Info*>(),
                        {"TryGetBodyDockAllObjectsIndexes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playFabId, bdAllIndexes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsLegacyV1Info::CosmeticsLegacyV1Info()   {
}
