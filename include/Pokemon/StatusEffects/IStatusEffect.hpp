#pragma once

#include <string>
#include "../Pokemon.hpp"  

namespace N_Pokemon {
    class IStatusEffect {
    public:
       
        virtual void applyEffect(Pokemon* target) = 0;

        
        virtual std::string getEffectName() = 0;

        
       
        virtual bool turnEndEffect(Pokemon* target) = 0;

        
        virtual void clearEffect(Pokemon* target) = 0;

        virtual ~IStatusEffect() = default;
    };
} 