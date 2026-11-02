//Question 01

function describeValue(value){
    let type = typeof(value);
    let truthyOrFalsy = value ? "truthy" : "falsy";
    return (`${type} | ${truthyOrFalsy}`);
}

//Question 02

function getDayType(day){

    const dayLowerCase = day.toLowerCase();

    switch(dayLowerCase){
        case "friday":
        case "saturday":

            return "Weekend";

        case "sunday":
        case "monday":
        case "tuesday":
        case "wednesday":
        case "thursday":

            return "Working Day";

        default:

            return "Invalid Day";
    }
}

//Question 03

function validateUsername(username){
    if(username.length < 4){
        return ("Too Short")
    }
    else if(username.includes(" ")){
        return ("No Space Allowed");
    }
    else if(username.includes("admin")){
        return ("Reserved Word");
    }
    else{
        return ("Available");
    }
}

//Question 04

function getCngFare(distance, isNight, waitingMinutes){

    let fare = 50;

    if(distance > 2){
        let extraFare = (distance - 2) * 15;
        fare = fare + extraFare;
    }

    if(waitingMinutes > 0){
        let waitingFare = waitingMinutes * 2;
        fare = fare + waitingFare;
    }
    
    if(isNight){
        nightFare = fare + (fare * 20/100);
         fare = nightFare;
    }

    return fare;
}

//Question 05

function getChaseVerdict(target, scored, ballsLeft){
    let runsNeeded = target - scored;
    let requiredRate = (runsNeeded / ballsLeft) * 6;

    let returnValue = "";

    if(requiredRate === Infinity){
        returnValue = "Lost"
    }
    else if(requiredRate <= 0){
        returnValue = "Won"

    }
    else if(requiredRate <= 6){
        returnValue = "Comfortable"
    }
    else if(requiredRate <= 12){
        returnValue = "Tough"
    }
    else if (requiredRate > 12) {
        returnValue ="Almost Impossible"
    }

    return (`Need ${target-scored} runs in ${ballsLeft} balls | ${returnValue}`)
    
}