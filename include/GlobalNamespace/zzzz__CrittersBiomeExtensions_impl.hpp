#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBiomeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersBiomeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__CrittersBiome_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersBiomeExtensions.GetHabitatDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::CrittersBiome)>(&::GlobalNamespace::CrittersBiomeExtensions::GetHabitatDescription)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x55fcb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBiomeExtensions*>(),
                        {"GetHabitatDescription", {}, {::i2c::type_of<::GlobalNamespace::CrittersBiome>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CrittersBiomeExtensions::setStaticF__allScannableBiomes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*, "_allScannableBiomes", ::GlobalNamespace::CrittersBiomeExtensions*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>* GlobalNamespace::CrittersBiomeExtensions::getStaticF__allScannableBiomes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*, "_allScannableBiomes", ::GlobalNamespace::CrittersBiomeExtensions*>();
}
inline void GlobalNamespace::CrittersBiomeExtensions::setStaticF__habitatLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*, "_habitatLookup", ::GlobalNamespace::CrittersBiomeExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>* GlobalNamespace::CrittersBiomeExtensions::getStaticF__habitatLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersBiome,::StringW>*, "_habitatLookup", ::GlobalNamespace::CrittersBiomeExtensions*>();
}
inline void GlobalNamespace::CrittersBiomeExtensions::setStaticF__habitatBiomes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*, "_habitatBiomes", ::GlobalNamespace::CrittersBiomeExtensions*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>* GlobalNamespace::CrittersBiomeExtensions::getStaticF__habitatBiomes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::CrittersBiome>*, "_habitatBiomes", ::GlobalNamespace::CrittersBiomeExtensions*>();
}
inline ::StringW GlobalNamespace::CrittersBiomeExtensions::GetHabitatDescription(::GlobalNamespace::CrittersBiome  biome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBiomeExtensions*>(),
                        {"GetHabitatDescription", {}, {::i2c::type_of<::GlobalNamespace::CrittersBiome>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, biome);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersBiomeExtensions::CrittersBiomeExtensions()   {
}
